import numpy as np

def partition(l, start, stop):
    # Set midpoint as pivot
    pivot = (start+stop) // 2

    # Move pivot to right
    l[pivot], l[stop] = l[stop], l[pivot]

    # Left initialized to start
    left = start
    for right in range(start, stop):
         if l[right] <= l[stop]:
             l[left], l[right] = l[right], l[left]
             left += 1
    l[left], l[stop] = l[stop], l[left]
    return left

def quicksort(l, start=0, stop=None):
    # Determine stop
    if stop is None:
        stop = len(l) - 1

    # Base case
    if start >= stop:
        return
    pivot = partition(l, start, stop)
    quicksort(l,start,pivot-1)
    quicksort(l,pivot+1,stop)

if __name__ == '__main__':
    l = list(np.random.rand(20) * 20)
    for i in range(len(l)):
        l[i] = int(l[i])
    print('Unsorted List:', l)
    quicksort(l)
    print('Sorted List:  ', l)
