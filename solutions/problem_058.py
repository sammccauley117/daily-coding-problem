class Node:
    def __init__(self, d):
        self.data = d
        self.next = None

    def append(self, d):
        curr = self
        while curr.next:
            curr = curr.next
        curr.next = Node(d)

    def append_list(self, head):
        curr = self
        while curr.next:
            curr = curr.next
        curr.next = head

    def __str__(self):
        s = ''
        curr = self
        while curr:
            s += str(curr.data)
            if curr.next: s += '->'
            curr = curr.next
        return s

def intersection(a, b):
    if a == None or b == None: return None

    s = set()

    curr = a
    while curr:
        s.add(curr)
        curr = curr.next

    curr = b
    while curr:
        if curr in s: return curr
        curr = curr.next

    return None


if __name__ == '__main__':
    a = Node(4)
    a.append(5)
    a.append(6)

    b = Node(1)
    b.append(2)
    b.append(3)
    b.append_list(a)

    print('a:', a)
    print('b:', b)
    print('intersection:', intersection(a,b))
