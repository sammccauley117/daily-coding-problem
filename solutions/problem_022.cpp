#include <iostream>
#include <set>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

void removeDuplicates(ListNode* head) {
  ListNode *pre;
  ListNode *curr = head;
  set<int> s;
  while(curr) {
    if(s.count(curr->val)) {
      pre->next = curr->next;
      curr = curr->next;
    } else {
      s.insert(curr->val);
      pre = curr;
      curr = curr->next;
    }
  }
}

int main() {
  ListNode n1(1), n2(2), n3(3), n4(3), n5(5);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  cout << "Input: ";
  ListNode *node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
  removeDuplicates(&n1);
  cout << "Result: ";
  node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}
