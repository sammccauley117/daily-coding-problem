def is_rotation(a, b):
    if len(a) != len(b): return False
    return b in a + a

if __name__ == '__main__':
    a = input('Input String 1: ')
    b = input('Input String 2: ')
    print('Output:', is_rotation(a, b))
