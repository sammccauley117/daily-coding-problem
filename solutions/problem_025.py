def urlify(s):
    s = s.strip()
    ans = ''
    previous = None
    for i in range(len(s)):
        if s[i] == ' ':
            if previous != ' ': ans += '%20'
        else: ans += s[i]
        previous = s[i]
    return ans

if __name__ == '__main__':
    s = input('Input: ')
    print('Output:', urlify(s))
