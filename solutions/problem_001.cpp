#include <string>
#include <math.h>
#include <iostream>
using namespace std;

int myAtoi(string str) {
  // Initial
  if(str.length() == 0) return 0; // Return 0: empty string
  int i = 0; // Cursor
  bool sign = true; // true is positive

  // Move cursor passed whitespace
  while(i < str.length() && isspace(str[i])) i++;
  if(i == str.length()) return 0; // Return 0: string was all whitespace

  // Check if first character is sign
  if(str[i] == '+' || str[i] == '-') {
    sign = (str[i] == '+');
    i++;
  }

  // Build number string
  string num = "";
  while(i < str.length() && str[i] == '0') i++; // Skip initial 0's
  while(i < str.length() && isdigit(str[i])) {
    num += str[i]; // Only appends digits
    i++;
  }
  if(num.length() == 0) return 0; // Return 0: content starts with non-digit
  if(num.length() > 10) // Integer overflow return min/max
    return sign ? INT_MAX : INT_MIN;

  // Answer magnitude: terate backwards multiplying by digit magnitude (one's place, ten's place, etc.)
  i = 0;
  int len = num.length() - 1; // Minus one because we're just using this for indexing
  int64_t ans = 0;
  for(i = 0; i <= len; i ++)
    ans += (num[len - i] - '0')*pow(10,i);

  // Check sign and int overflow, then return answer
  if(sign)
    return ans > INT_MAX ? INT_MAX : ans;
  ans *= -1; // Negate
  return ans < INT_MIN ? INT_MIN : ans;
}

int main() {
  while(1) {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Result: " << myAtoi(str) << endl << endl;
  }
}
