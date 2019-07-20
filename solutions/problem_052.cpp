#include <iostream>
#include <string>

using namespace std;

bool isUnique(string s) {
  bool characters[128] = {};

  for(int i = 0; i <s.size(); i++) {
    if(characters[s[i]]) return false;
    characters[s[i]] = true;
  }
  
  return true;
}

int main() {
  string s;
  cout << "Input: ";
  getline(cin, s);
  cout << s << endl;
  string output = isUnique(s) ? "true" : "false";
  cout << "Output: " << output;
}
