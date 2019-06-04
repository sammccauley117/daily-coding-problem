class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def toNode(l):
    l = [ListNode(val) for val in l]
    for i in range(len(l) - 1):
        l[i].next = l[i+1]
    return l[0]

def mergeKLists(lists):
    vals = [] # Will hold the value of every node of every list

    # Iterate through each node adding each value to vals
    for node in lists:
        l = node
        while l:
            vals.append(l.val)
            l = l.next

    # Sort node values and make sure its not empty
    vals.sort()
    if len(vals) == 0:
        return

    # Contruct return list
    ret = ListNode(vals.pop(0))
    tail = ret
    for val in vals:
        tail.next = ListNode(val)
        tail = tail.next

    return ret

if __name__ == '__main__':
    input = [[1,4,5],[1,3,4],[2,6]]
    print('Input:', input)

    x = []
    for a in input:
        x.append(toNode(a))

    output = mergeKLists(x)
    outList = []
    while output:
        outList.append(output.val)
        output = output.next

    print('Output:', outList)
