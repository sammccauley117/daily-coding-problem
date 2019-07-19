#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isPermutation(string s) {
  map<char, int> m;
  map<char, int>::iterator it;
  bool oddAllowed = s.size() % 2;

  for(int i = 0; i < s.size(); i++) {
    char c = s[i];
    if(m.count(c)) {
      m[c] += 1;
    } else {
      m[c] = 1;
    }
  }

  for(it = m.begin(); it != m.end(); it++) {
    if(it->second % 2) {
      if(oddAllowed) oddAllowed = false;
      else return false;
    }
  }

  return true;
}

int main() {
  string s;
  cout << "Input: "; cin >> s;
  string output = isPermutation(s) ? "true" : "false";
  cout << "Output: " << output;
}
