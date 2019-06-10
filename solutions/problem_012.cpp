#include <vector>
#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

void reorderList(ListNode* head) {
  if(!head) return; // Null input
  vector<ListNode*> nodes;
  ListNode *node = head;

  // Build vector of all node objects
  while(node) {
    nodes.push_back(node);
    node = node->next;
  }

  // Reorder nodes
  for(int n = 0; n < nodes.size()/2; n++) {
    nodes[n]->next = nodes[nodes.size() - n - 1];
    nodes[nodes.size() - n - 1]->next = nodes[n+1];
  }

  // Deal with the last nodes pointing to NULL
  if(nodes.size()%2) nodes[nodes.size()/2]->next = NULL;
  else nodes[nodes.size() - (nodes.size()/2-1) - 1]->next = NULL;
}

int main() {
  ListNode n1(1), n2(2), n3(3), n4(4), n5(5);
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
  reorderList(&n1);
  cout << "Output: ";
  node = &n1;
  while(node) {
    cout << node->val << " ";
    node = node->next;
  }
  cout << endl;
}
