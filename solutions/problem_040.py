from binarytree import tree

def depths(node, visited=[], depth=0):
    if len(visited) == depth: visited.append([node.value])
    else: visited[depth].append(node.value)

    if node.left: depths(node.left, visited, depth+1)
    if node.right: depths(node.right, visited, depth+1)

    return visited

if __name__ == '__main__':
    root = tree(height=4, is_perfect=False)
    print('Input tree:')
    print(root)
    print('Result:',depths(root))
