#include <iostream>
#include <set>
#include <bitset>

using namespace std;

int insertion(int N, int M, int i, int j) {
  int ans = 0;
  int l = 0;
  for (int k = 0; k < 32; k++) {
    if(k >= i && k <= j) {
      if(M >> l & 1)
        ans |= 1 << k;
      l++;
    } else {
      if(N >> k & 1)
        ans |= 1 << k;
    }
  }
  return ans;
}

int main() {
  int N = 0b10000000000;
  int M = 0b10011;
  int i = 2;
  int j = 6;
  bitset<16> n(N);
  bitset<16> m(M);
  bitset<16> ans(insertion(N, M, i, j));
  cout << "Input:" << endl;
  cout << "  N: " << n << endl;
  cout << "  M: " << m << endl;
  cout << "  i: " << i << endl;
  cout << "  j: " << j << endl;
  cout << "Result: " << ans;
}
