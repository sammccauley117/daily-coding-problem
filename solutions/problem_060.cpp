#include <iostream>

using namespace std;

int stairs(int n) {
  int possibilities = 0;
  if(n >= 3) {
    possibilities += stairs(n - 3);
    possibilities += stairs(n - 2);
    possibilities += stairs(n - 1);
  } else if (n == 2) {
    possibilities += 2;
  } else {
    possibilities += 1;
  }
  return possibilities;
}

int main() {
  int x;
  cout << "Input: ";
  cin >> x;
  cout << "Output: " << stairs(x);
}
