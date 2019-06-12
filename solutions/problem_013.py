def convertToTitle(n):
    if n < 1: return ''
    m = n % 26
    d = n // 26
    if m:
        if d > 26: return convertToTitle(d) + chr(m+64)
        elif d: return chr(d+64) + chr(m+64)
        else: return chr(m+64)
    else:
        d -= 1
        if d > 26: return self.convertToTitle(d) + 'Z'
        elif d: return chr(d+64) + 'Z'
        else: return 'Z'

if __name__ == '__main__':
    x = int(input('Input: '))
    print('Output:', convertToTitle(x))
