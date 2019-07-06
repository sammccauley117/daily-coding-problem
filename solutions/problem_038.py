from binarytree import tree

def bfs(node, target):
    queue = [node]
    while queue:
        working = queue.pop(0)
        if working.value == target: return True
        if working.left: queue.append(working.left)
        if working.right: queue.append(working.right)
    return False

if __name__ == '__main__':
    root = tree(height=4, is_perfect=False)
    print(root)
    target = int(input('Target: '))
    print('Result:', bfs(root,target))
