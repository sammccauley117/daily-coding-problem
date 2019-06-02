#include <string>
#include <iostream>
using namespace std;

int compareVersion(string version1, string version2) {
  // Loop through the most significant .'s
  while (version1.find('.') != string::npos || version2.find('.') != string::npos) {
    int v1 = stoi(version1);
    int v2 = stoi(version2);
    if (v1 > v2) return 1;
    if (v1 < v2) return -1;

    if (version1.find('.') != string::npos) {
      version1 = version1.substr(version1.find('.')+1);
    } else {
      version1 = "0";
    }

    if (version2.find('.') != string::npos) {
      version2 = version2.substr(version2.find('.')+1);
    } else {
      version2 = "0";
    }
  }

  // Compare the last bit if the leading .'s are the same
  int v1 = stoi(version1);
  int v2 = stoi(version2);
  if (v1 > v2) return 1;
  if (v1 < v2) return -1;
  return 0; // Same version
}

int main() {
  string version1 = "0.1";
  string version2 = "1.1";
  cout << "version1: " << version1 << endl;
  cout << "version2: " << version2 << endl;
  cout << "Result: " << compareVersion(version1, version2) << endl;
}
