#include <iostream>

using namespace std;

class stack {
private:
  int* arr;
  int top = -1;
  int size = 0;
public:

  void append(int data) {
    top++;

    // Check to see if we need to expand the array
    if(size == top) {
      if(size == 0) {
        size = 1;
        arr = new int[size];
      } else {
        int* newArr = new int[size*2];
        memcpy(newArr, arr, size*sizeof(int));
        delete [] arr;
        arr = newArr;
        size *= 2;
      }
    }

    // Put the data in the new stack top;
    arr[top] = data;
  }

  int pop() {
    top--;
    return arr[top+1];
  }

  void print() {
    cout << "[";
    for(int i = 0; i <= top; i++) {
      cout << arr[i];
      if(i < top) cout << ", ";
    }
    cout << "]";
  }

};

int main() {
  stack s;
  cout << "Calling append(): 1, 2, 3, 4, 5" << endl;
  s.append(1);
  s.append(2);
  s.append(3);
  s.append(4);
  s.append(5);
  cout << "Stack after appending: ";
  s.print(); cout << endl;
  cout << "Calling pop()" << endl;
  cout << "Result: " << s.pop() << endl;
  cout << "Stack after popping: "; 
  s.print(); cout << endl;
}
