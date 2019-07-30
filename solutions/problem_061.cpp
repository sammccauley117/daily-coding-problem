#include <iostream>
#include <string>

using namespace std;

int lastWord(string str) {
  if(str.length() == 0) return 0;
  string res = "";
  bool ws = str[str.length() - 1] == ' ' ? true : false; // Whitespace
  for(int i = 0; i < str.length(); i++) {
    char c = str[str.length() - i - 1];
    if(c != ' ') {
      res += c;
      if(ws) ws = false;
    } else if(!ws) {
      break;
    }
  }

  return res.length();
}

int main() {
  string x;
  cout << "Input: ";
  getline(cin, x);
  cout << "Output: " << lastWord(x);
}
