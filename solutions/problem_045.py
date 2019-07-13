def lengthOfLastWord(s):
    s = s.strip()[::-1]
    i = 0
    while i < len(s) and s[i] != ' ':
        i += 1
    return i

if __name__ == '__main__':
    s = input('Input: ')
    print('Output:', lengthOfLastWord(s))
