from binarytree import Node

def build_tree(values):
    values.sort()
    mid = len(values) // 2
    root = Node(values[mid])
    left = values[:mid]
    right = values[mid+1:]
    add_nodes(root,left,right)
    return root

def add_nodes(node, left, right):
    if not left and not right: return
    if left:
        mid = len(left) // 2
        leftNode = Node(left[mid])
        node.left = leftNode
        add_nodes(leftNode, left[:mid], left[mid+1:])
    if right:
        mid = len(right) // 2
        rightNode = Node(right[mid])
        node.right = rightNode
        add_nodes(rightNode, right[:mid], right[mid+1:])

if __name__ == '__main__':
    values = []
    while 1:
        x = int(input('Input: '))
        if x > 0 and x < 51: break
        else: print('Please input a number greater than 0 and less than or equal to 50 (for printing reasons)')
    for i in range(x):
        values.append(i)
    print('Values to build a tree from:', values)
    root = build_tree(values)
    print('Result: ')
    print(root)
