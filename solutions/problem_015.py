def hammingWeight(n):
    result = 0
    for i in range(32):
        if(n & 1): result += 1
        n >>= 1
    return result

def grayCode(n):
    if n == 0: return [0]
    result = [0,1]
    for i in range(2,n+1):
        possible = list(range(2**(i-1),(2**i)))
        while len(possible) > 0:
            lastWeight = hammingWeight(result[-1])
            for j, val in enumerate(possible):
                if abs(lastWeight - hammingWeight(val)) == 1:
                    result.append(val)
                    possible.pop(j)
                    break
    return result

if __name__ == '__main__':
    x = int(input('Input: '))
    print('Result:', grayCode(x))
