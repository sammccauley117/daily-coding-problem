#include <iostream>

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

void partition(Node* head, int p) {
  if(!head) return;

  // Variable Initialization
  Node* leftStart = NULL;
  Node* leftEnd = NULL;
  Node* rightStart = NULL;
  Node* rightEnd = NULL;
  Node* cursor = head;

  // Find left and right sides
  while(cursor) {
    if(cursor->data < p) { // Left side
      if(!leftStart) {
        leftStart = cursor;
        leftEnd = cursor;
      } else {
        leftEnd->next = cursor;
        leftEnd = cursor;
      }
    } else { // Right side
      if(!rightStart) {
        rightStart = cursor;
        rightEnd = cursor;
      } else {
        rightEnd->next = cursor;
        rightEnd = cursor;
      }
    }
    cursor = cursor->next;
  }

  // Connect left and right sides
  leftEnd->next = rightStart;
  rightEnd->next = NULL;
}

int main(){
  Node head(1);
  head.append(8);
  head.append(9);
  head.append(4);
  head.append(3);
  head.append(6);
  head.append(1);
  head.append(7);
  cout << "Initial Linked List: ";
  head.print();
  cout << "Partition: ";
  int p;
  cin >> p;
  cout << endl;
  partition(&head, p);
  head.print();
}
