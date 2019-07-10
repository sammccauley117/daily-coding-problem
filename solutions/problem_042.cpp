#include <iostream>
#include <bitset>

using namespace std;

int swap(int x) {
  int oddBits = x & 0xAAAAAAAA;
  int evenBits = x & 0x55555555;
  return (oddBits >> 1) | (evenBits << 1);
}

int main() {
  int input, output;
  cout << "Input: "; cin >> input;
  bitset<32> inputBinary(input);
  cout << "Input:  0b" << inputBinary << endl;
  output = swap(input);
  bitset<32> outputBinary(output);
  cout << "Output: 0b" << outputBinary << endl;
}
