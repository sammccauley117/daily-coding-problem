#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {
  if (size == 0) return -1;
  int start = 0;
  int end = size - 1;
  while(start <= end) {
    int mid = (start + end) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) end = mid - 1;
    else start = mid + 1;
  }
  return -1;
}

int main() {
  int size = 10;
  int arr[size] = {10,20,30,40,50,60,70,80,90,100};
  cout << "Array: [";
  for(int i = 0; i < size; i++) {
    cout << arr[i];
    if(i != size - 1) cout << ", ";
  }
  cout << "]" << endl;
  int target;
  cout << "Seach for: "; cin >> target; cout << endl;
  cout << binarySearch(arr, size, target);
}
