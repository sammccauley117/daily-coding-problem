def isPalindrome(x):
    # Variable initialization
    x = str(x)
    l = len(x) / 2
    i = 0

    # Loop through, checking to make sure each side is the same
    while i < l:
        if x[i] != x[-(i+1)]: return False
        i += 1
    return True

if __name__ == '__main__':
    x = -123
    print('Input', x)
    print('Result:', isPalindrome(x))
