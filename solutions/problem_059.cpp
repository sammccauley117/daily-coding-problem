#include <iostream>
#include <string>

using namespace std;

class Node {
public:
  char data;
  Node* next = NULL;
  Node* previous = NULL;

  Node(char d) {
    data = d;
  }

  void append(char d) {
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

bool isPalindrome(Node* head) {
  if(!head) return true;

  Node* left = head;
  Node* right = head;
  int length = 1;

  while(right->next) {
    right = right->next;
    length++;
  }

  for(int i = 0; i < length / 2; i++) {
    if(left->data != right->data) return false;
    left = left->next;
    right = right->previous;
  }

  return true;
}

int main() {
  string s;
  cout << "Input: ";
  cin >> s;

  Node head(s[0]);
  for(int i = 1; i < s.length(); i++) {
    head.append(s[i]);
  }

  cout << "Input list: ";
  head.print();
  cout << "Output: " << isPalindrome(&head) << endl;

}
