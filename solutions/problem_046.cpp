#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node* next = NULL;
  Node* previous = NULL;

  Node(int d) {
    data = d;
  }

  void append(int d) {
    Node* tail = new Node(d);
    Node* curr = this;
    while(curr->next) {
      curr = curr->next;
    }
    curr->next = tail;
    tail->previous = curr;
  }

  void print() {
    Node* curr = this;
    while(curr) {
      if(curr->next) cout << curr->data << " <-> ";
      else cout << curr->data << endl;
      curr = curr->next;
    }
  }
};

int main() {
  Node head(1);
  head.append(2);
  head.append(3);
  head.append(4);
  head.append(5);
  head.print();
}
