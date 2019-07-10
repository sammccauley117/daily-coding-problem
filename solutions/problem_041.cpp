#include <iostream>
#include <string>

using namespace std;

string compression(string str) {
  string res = "";
  char previous = '\0';
  int count = 0;
  for(int i = 0; i < str.length(); i++) {
    if(previous == str[i]) count++;
    else {
      if(previous) res += previous + to_string(count);
      previous = str[i];
      count = 1;
    }
  }
  res += previous + to_string(count);

  return res.length() < str.length() ? res : str;
}

int main() {
  string input;
  cout << "Input: ";
  cin >> input;
  cout << "Output: " << compression(input) << endl;
}
