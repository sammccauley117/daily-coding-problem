import numpy as np

def merge(left, right):
    sorted = []
    # While left and right have elements
    while left and right:
        if left[0] < right[0]:
            sorted.append(left.pop(0))
        else:
            sorted.append(right.pop(0))
    while left:
        sorted.append(left.pop(0))
    while right:
        sorted.append(right.pop(0))
    return sorted

def mergesort(l):
    # Base Case: array is 0/1 item, therefore already sorted
    length = len(l)
    if length <= 1:
        return l

    # Split array in halves
    left = l[:length//2] # Left side
    right = l[length//2:] # Right side

    # Recursive step: mergesort each half
    left = mergesort(left)
    right = mergesort(right)

    return merge(left, right)

if __name__ == '__main__':
    l = list(np.random.rand(20) * 20)
    for i in range(len(l)):
        l[i] = int(l[i])
    print('Unsorted List:', l)
    print('Sorted List:  ', mergesort(l))
