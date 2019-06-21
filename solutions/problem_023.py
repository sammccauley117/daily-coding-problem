def isPermutation(s1, s2):
    d1 = {}
    d2 = {}

    if len(s1) != len(s2): return False

    for c in s1:
        if c in d1: d1[c] += d1[c] + 1
        else: d1[c] = 0

    for c in s2:
        if c in d2: d2[c] += d2[c] + 1
        else: d2[c] = 0

    if len(d1) != len(d2): return False

    for c, count in d1.items():
        if c not in d2 or d2[c] != count: return False

    return True

if __name__ == '__main__':
    s1 = input('Input 1: ')
    s2 = input('Input 2: ')
    print('Output:',isPermutation(s1, s2))
