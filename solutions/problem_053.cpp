#include <iostream>
#include <vector>

using namespace std;

const int X = 4;
const int Y = 3;

void zeroRC(int m[Y][X], int r, int c) {
  for(int i = 0; i < Y; i++)
    m[i][c] = 0;
  for(int j = 0; j < X; j++)
    m[r][j] = 0;
}

void zeros(int m[Y][X]) {
  vector<int> coords;

  for(int i = 0; i < Y; i++) {
    for(int j = 0; j < X; j++) {
      if(m[i][j] == 0) {
        coords.push_back(i);
        coords.push_back(j);
      }
    }
  }

  for(int i = 0; i < coords.size(); i += 2) {
    zeroRC(m, coords[i], coords[i+1]);
  }
}

void printMatrix(int m[Y][X]) {
  int x = 4;
  for(int i = 0; i < Y; i++) {
    for(int j = 0; j < X; j++) {
      cout << m[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int m[Y][X] = {
    {0, 1, 2, 3} ,
    {4, 5, 6, 7} ,
    {8, 9, 10, 0}
  };
  cout << "Input matrix:" << endl;
  printMatrix(m);
  cout << endl;
  cout << "Zeroed matrix:" << endl;
  zeros(m);
  printMatrix(m);
  cout << endl;
}
