from binarytree import tree

def dfs(node, target, visited=[]):
    if node.value == target: return True
    visited.append(node)
    left = False
    right = False
    if node.left and node.left not in visited:
        left = dfs(node.left, target, visited)
    if node.right and node.right not in visited:
        right = dfs(node.right, target, visited)
    if left or right: return True
    return False


if __name__ == '__main__':
    root = tree(height=4, is_perfect=False)
    print(root)
    target = int(input('Target: '))
    print('Result:',dfs(root,target))
