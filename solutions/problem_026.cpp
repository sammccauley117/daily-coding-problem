#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* fromEnd(ListNode* head, int k) {
  ListNode* node = head;
  vector<ListNode*> nodes;
  while(node) {
    nodes.push_back(node);
    node = node->next;
  }
  return nodes[nodes.size() - k - 1];
}

int main() {
  ListNode n1(1), n2(2), n3(3), n4(4), n5(5);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  cout << "Linked List: ";
  ListNode *node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
  int k;
  cout << "k: ";
  cin >> k;
  cout << endl;
  cout << "Output: " << fromEnd(&n1, k)->val;
}
