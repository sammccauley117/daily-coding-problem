#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  map<int, int> need; // Hash table of what numbers are needed to hit target

  // Check every number in nums to see if it's what we need to hit the target
  for(int i = 0; i < nums.size(); i++) {
    if(need.count(nums[i])) return vector<int> {need[nums[i]], i};
    need[target - nums[i]] = i;
  }

  return vector<int> {-1, -1};
}

int main() {
  vector<int> nums{2,7,11,15};
  int target = 9;
  cout << "Input: [2,7,11,15]" << endl;
  cout << "Target: " << target << endl;
  vector<int> result = twoSum(nums, target);
  cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl;
}
