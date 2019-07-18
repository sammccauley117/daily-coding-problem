def stairs(n):
    possibilities = 0
    if n >= 3:
        possibilities += stairs(n - 3)
        possibilities += stairs(n - 2)
        possibilities += stairs(n - 1)
    elif n == 2:
        possibilities += 2
    else:
        possibilities += 1
    return possibilities

if __name__ == '__main__':
    x = int(input('Input: '))
    print('Output:', stairs(x))
