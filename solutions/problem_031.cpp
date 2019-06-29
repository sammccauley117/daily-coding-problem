#include <iostream>

using namespace std;

int conversion(int a, int b) {
  int ans = 0;
  for(int i = 0; i < 32; i++) {
    if(((a>>i) & 1) != ((b>>i) & 1)) ans++;
  }
  return ans;
}

int main() {
  int a, b;
  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  cout << "Result: " << conversion(a,b) << endl;
}
