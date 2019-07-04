#include <iostream>
#include <set>

using namespace std;

class Node {
public:
  int data;
  Node* next = NULL;

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
  }

  void print() {
    Node* curr = this;
    while(curr) {
      if(curr->next) cout << curr->data << "->";
      else cout << curr->data << endl;
      curr = curr->next;
    }
  }
};

Node* loopDetection(Node* head) {
  Node* current = head;
  set<Node*> s;

  while(current) {
    if(s.count(current)) return current;
    s.insert(current);
    current = current->next;
  }

  return NULL;
}

int main(){
  Node head(1);
  Node a(2);
  Node b(3);
  Node c(4);
  Node d(5);
  head.next = &a;
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &b; // Circular reference to b, comment this line to make it non-circular
  Node* result = loopDetection(&head);
  if(result) cout << "Result: loop at " << result << endl;
  else cout << "Result: no loop detected" << endl;
}
