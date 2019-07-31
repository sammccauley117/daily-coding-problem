def compression(s):
    res = ''
    previous = None
    count = 0;
    for i in range(len(s)):
        if previous == s[i]:
            count += 1
        else:
            if previous: res += previous + str(count)
            previous = s[i];
            count = 1;
    res += previous + str(count)

    return res if len(res) < len(s) else s

if __name__ == '__main__':
    x = input('Input: ')
    print('Output:', compression(x))
