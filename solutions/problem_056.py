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

def sum_lists(a, b):
    A = ''
    B = ''

    while(a):
        A += str(a.data)
        a = a.next
    while(b):
        B += str(b.data)
        b = b.next

    res = int(A) + int(B)
    res = str(res)
    res_head = None

    for digit in res:
        if res_head: res_head.append(int(digit))
        else: res_head = Node(int(digit))

    return res_head

if __name__ == '__main__':
    a = Node(6)
    a.append(1)
    a.append(7)

    b = Node(2)
    b.append(9)
    b.append(5)

    print('a =', a)
    print('b =', b)
    print('a + b =', sum_lists(a,b))
