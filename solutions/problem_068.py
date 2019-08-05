def hamming_distance(x, y):
  result = 0
  x ^= y
  while x > 0:
    if x & 1: result += 1
    x >>= 1
  return result

if __name__ == '__main__':
    x = int(input('Input 1: '))
    y = int(input('Input 2: '))
    print('Output:', hamming_distance(x,y))
