class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def dfsL(node, visited):
    visited.append(node.val)
    if node.left:
        dfsL(node.left, visited)
    else: visited.append(None)

    if node.right:
        dfsL(node.right, visited)
    else: visited.append(None)

def dfsR(node, visited):
    visited.append(node.val)
    if node.right:
        dfsR(node.right, visited)
    else: visited.append(None)

    if node.left:
        dfsR(node.left, visited)
    else: visited.append(None)

def isSymmetric(root):
    if root == None: return True

    left = []
    right = []
    if root.left: dfsL(root.left, left)
    if root.right: dfsR(root.right, right)
    return left == right
