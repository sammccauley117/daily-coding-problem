#include <vector>
#include <iostream>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  // Variable initialization
  int height = matrix.size(); // Vertical height of the matrix
  if(!height) return false; // Empty matrix
  int width = matrix[0].size(); // Horizontal width of the matrix
  if(!width) return false; // Empty rows
  int last = width - 1; // The last index of a row

  // Find the y position of where the tartget could potentially exist
  int y = 0;
  int previousMax = INT_MIN;
  int currentMin, currentMax;
  while(y < height) {
    currentMin = matrix[y][0];
    currentMax = matrix[y][last];

    // Check to see if we skipped over the target
    if(target < currentMin && target > previousMax)
      return false;

    // Check to see if the target is in the current row
    if(target >= currentMin && target <= currentMax)
      break;

    // Update for the next iteration
    previousMax = currentMax;
    y++;
  }

  // Make sure we found a valid y position
  if(y == height) return false; // Target not in matrix

  // Check to see if target actually exists at the y position
  // Start at whichever side the target is probably closer to
  if(target - currentMin < currentMax - target) { // Better to start from the left side
    for(int i = 0; i < width; i++) {
      int element = matrix[y][i];
      if(element == target) return true;
      if(target < element) return false;
    }
  } else { // Better to start from the right side
    for(int i = 0; i < width; i++) {
      int element = matrix[y][width-i-1];
      if(element == target) return true;
      if(target > element) return false;
    }
  }

  return false;
}

int main() {
  vector<vector<int>> input {
    {1, 3, 5, 7},
    {10,11,16,20},
    {23,30,34,50}
  };
  cout << "Input: " << endl;
  for(int y = 0; y < input.size(); y++) {
    cout << "\t[";
    for(int x = 0; x < input[0].size(); x++) {
      if(x == input[0].size() - 1)
        cout << "\t" << input[y][x] << "]" << endl;
      else
        cout << "\t" << input[y][x] << ", ";
    }
  }
  int target;
  cout << "Target: "; cin >> target;
  cout << "Output: " << searchMatrix(input, target) << endl;
}
