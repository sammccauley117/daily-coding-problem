class Node:
    def __init__(self, d):
        self.data = d
        self.next = None
        self.previous = None

    def append(self, d):
        curr = self
        while curr.next:
            curr = curr.next
        curr.next = Node(d)
        curr.next.previous = curr

    def __str__(self):
        s = ''
        curr = self
        while curr:
            s += str(curr.data)
            if curr.next: s += ' <-> '
            curr = curr.next
        return s

if __name__ == '__main__':
    head = Node(1)
    head.append(2)
    head.append(3)
    head.append(4)
    head.append(5)
    print(head)
