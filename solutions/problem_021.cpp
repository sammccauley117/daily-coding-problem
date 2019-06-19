#include <iostream>
#include <set>
#include <string>

using namespace std;

bool isUnique(string str) {
  if (s.length() > 128) return false; // Not possible to *not* have repeat chars

  set<char> s;
  for(int i = 0; i < str.length(); i++) {
    if(!s.count(str[i]))
      s.insert(str[i]);
    else
      return false;
  }

  return true;
}

int main() {
  string in;
  cout << "Input: ";
  cin >> in;
  cout << "Output: " << isUnique(in);
}
