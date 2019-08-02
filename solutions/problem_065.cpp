struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

int getDepth(TreeNode* node, int depth) {
  int left = depth;
  int right = depth;

  if(node->left) {
      left = getDepth(node->left, depth+1);
  }

  if(node->right) {
      right = getDepth(node->right, depth+1);
  }

  return right > left ? right : left;
}

int maxDepth(TreeNode* root) {
  if(root == NULL) return 0;
  return getDepth(root, 1);
}
