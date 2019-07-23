#include <iostream>

using namespace std;

class Stack {
private:
  const static int numElements = 10000;
  int stack[numElements];
  int top1 = -1;
  int top2 = -1;
  int top3 = -1;
public:
  void push(int index, int data) {
    if (index <= 0 || index > 3) {
      throw invalid_argument("Either push to stack 1, 2, or 3");
    }
    int root = int(((index - 1) / 3.0) * numElements);

    switch(index) {
      case 1:
        top1++;
        root += top1;
        break;
      case 2:
        top2++;
        root += top2;
        break;
      case 3:
        top3++;
        root += top3;
        break;
    }
    stack[root] = data;
  }

  int pop(int index) {
    if (index <= 0 || index > 3) {
      throw invalid_argument("Either push to stack 1, 2, or 3");
    }
    int root = int(((index - 1) / 3.0) * numElements);

    switch(index) {
      case 1:
        root += top1;
        top1--;
        break;
      case 2:
        root += top2;
        top2--;
        break;
      case 3:
        root += top3;
        top3--;
        break;
    }
    return stack[root];
  }

  void print() {
    int root1 = 0;
    int root2 = int((1 / 3.0) * numElements);
    int root3 = int((2 / 3.0) * numElements);

    cout << "Stack 1: ";
    for(int i = 0; i <= top1; i++) {
      cout << stack[root1 + i] << "  ";
    }
    cout << endl;

    cout << "Stack 2: ";
    for(int i = 0; i <= top2; i++) {
      cout << stack[root2 + i] << "  ";
    }
    cout << endl;

    cout << "Stack 3: ";
    for(int i = 0; i <= top3; i++) {
      cout << stack[root3 + i] << "  ";
    }
    cout << endl;
  }
};

int main() {
  Stack s;
  cout << "Pushing..." << endl;
  s.push(1, 1);
  s.push(1, 2);
  s.push(1, 3);

  s.push(2, 4);
  s.push(2, 5);
  s.push(2, 6);

  s.push(3, 7);
  s.push(3, 8);
  s.push(3, 9);

  s.print();

  cout << "\nPopping..." << endl;
  s.pop(1);
  s.pop(2);
  s.pop(3);

  s.print();
}
