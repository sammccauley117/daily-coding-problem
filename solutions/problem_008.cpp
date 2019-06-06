#include <vector>
#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
  // Variable initialization
  vector<ListNode*> nodes;
  ListNode *node = head;

  // Build complete node vector
  while(node) {
    nodes.push_back(node);
    node = node->next;
  }

  // Remove Nth node
  int length = nodes.size();
  if(n != length) {
    nodes[length-n-1]->next = nodes[length-n]->next;
  } else {
    return length > 1 ? nodes[1] : NULL;
  }

  return nodes[0];
}

int main() {
  ListNode n1(1), n2(2), n3(3);
  n1.next = &n2;
  n2.next = &n3;
  cout << "Input: ";
  ListNode *node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
  removeNthFromEnd(&n1,2);
  cout << "Output: ";
  node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}
