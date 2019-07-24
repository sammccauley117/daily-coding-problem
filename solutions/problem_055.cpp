#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
  stack<int> s;
public:
  void push(int data) {
    s.push(data);
  }

  int pop() {
    if(s.empty()) {
      throw length_error("Stack already empty");
    }

    stack<int> q;
    while(!s.empty()) {
      q.push(s.top());
      s.pop();
    }

    int ret = q.top();
    q.pop();

    while(!q.empty()) {
      s.push(q.top());
      q.pop();
    }

    return ret;
  }
};

int main() {
  cout << "Queing: 1, 2, 3, 4, 5" << endl;
  MyQueue q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << "Dequing: " << q.pop() << endl;
  cout << "Dequing: " << q.pop() << endl;
  cout << "Dequing: " << q.pop() << endl;
}
