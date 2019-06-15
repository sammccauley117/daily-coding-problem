#include <iostream>

using namespace std;

int hammingDistance(int x, int y) {
  short result = 0;
  x ^= y; // Find the bit differences
  while(x > 0) {
    if(x&1) result++;
    x >>= 1;
  }
  return result;
}

int main() {
  int x1, x2;
  cout << "Input 1: ";
  cin >> x1;
  cout << "Input 2: ";
  cin >> x2;
  cout << "Result: " << hammingDistance(x1, x2);
}
