def swap(x):
  odd = x & 0xAAAAAAAA
  even = x & 0x55555555
  return (odd >> 1) | (even << 1)

if __name__ == '__main__':
    x = int(input('Input: '))
    print('Input Binary:  {0:16b}'.format(x))
    print('Output Binary: {0:16b}'.format(swap(x)))
