def solve(s):
    ans = ''
    previous = ' '
    for c in s:
        if c.isalpha() and previous == ' ':
            ans += c.upper()
        else:
            ans += c
        previous = c
    return ans

if __name__ == '__main__':
    s = input('Input: ')
    print('Output:', solve(s))
