def reverse(x):
    ans = str(x)[::-1]
    if ans[-1] == '-':
        ans = '-'+ans[:-1]
    ans = int(ans)
    if ans > 2147483647 or ans < -2147483648:
        return 0
    return ans

if __name__ == '__main__':
    x = input('Input: ')
    print('Result:', reverse(x))
