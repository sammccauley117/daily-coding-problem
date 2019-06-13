#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
  if(n <= 0) return false;
  short hammingWeight = 0; // How many one's are in the binary representation
  for(int i = 0; i < 32; i++) {
    if(n & 1) hammingWeight++; // Tests if the LSB is 1
    n >>= 1; // Rotate to the next bit
  }
  if(hammingWeight == 1) return true;
  else return false;
}

int main() {
  int n;
  cout << "Input: ";
  cin >> n;
  cout << "Output: " << isPowerOfTwo(n);
}
