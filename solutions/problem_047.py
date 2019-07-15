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

def is_palindrome(head):
    if not head: return True

    left = head
    right = head
    length = 1

    while right.next:
        right = right.next
        length += 1

    for i in range(int(length//2)):
        if left.data != right.data: return False
        left = left.next
        right = right.previous

    return True

if __name__ == '__main__':
    x = input('Input: ')
    if len(x) == 0:
        head = None
    else:
        head = Node(x[0])
        for c in x[1:]:
            head.append(c)
    print('Input Linked List:', head)
    print('Output:', is_palindrome(head))
