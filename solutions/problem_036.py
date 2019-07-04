def reverse_words(s):
    return ' '.join(s.split()[::-1])

if __name__ == '__main__':
    x = input('Input: ')
    print('Output: "'+reverse_words(x)+'"')
