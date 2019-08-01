class Node:
    def __init__(self, d):
        self.data = d
        self.next = None

    def append(self, d):
        curr = self
        while curr.next:
            curr = curr.next
        curr.next = Node(d)

    def __str__(self):
        s = ''
        curr = self
        while curr:
            s += str(curr.data)
            if curr.next: s += '->'
            curr = curr.next
        return s

def is_loop(head):
    d = set()
    curr = head
    while curr:
        if curr in d: return True
        d.add(curr)
        curr = curr.next
    return False

if __name__ == '__main__':
    n0 = Node(0)
    n1 = Node(1)
    n2 = Node(2)
    n3 = Node(3)
    n4 = Node(4)

    n0.next = n1
    n1.next = n2
    n2.next = n3
    n3.next = n4
    n4.next = n2 # Circular reference, uncomment this to remove loop

    print('Loop:',is_loop(n0))
