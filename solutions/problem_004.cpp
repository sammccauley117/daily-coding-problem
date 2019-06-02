#include <string>
#include <iostream>
using namespace std;

int romanToInt(string s) {
  // Initial
  short total = 0; // Accumulated sum
  short i = 0; // Index
  short length = s.length(); // Length of string
  s += ' '; // Add so that we don't have to check for out of bounds error every time

  // Loop through string accumulating total
  while(i < length) {
    switch(s[i]) {
      case 'I':
        switch(s[i+1]) {
          case 'V': total += 4; i+= 2; break;
          case 'X': total += 9; i+= 2; break;
          default:  total += 1; i+= 1; break;
        }
        break;
      case 'V':
        total += 5;
        i++;
        break;
      case 'X':
        switch(s[i+1]) {
          case 'L': total += 40; i+= 2; break;
          case 'C': total += 90; i+= 2; break;
          default:  total += 10; i+= 1; break;
        }
        break;
      case 'L':
        total += 50;
        i++;
        break;
      case 'C':
        switch(s[i+1]) {
          case 'D': total += 400; i+= 2; break;
          case 'M': total += 900; i+= 2; break;
          default:  total += 100; i+= 1; break;
        }
        break;
      case 'D':
        total += 500;
        i++;
        break;
      case 'M':
        total += 1000;
        i++;
        break;
      default:
        i++;
        break;
    }
  }

  return total;
}

int main() {
  string romanNum = "IV";
  cout << "Input: " << romanNum << endl;
  cout << "Result: " << romanToInt(romanNum) << endl;
}
