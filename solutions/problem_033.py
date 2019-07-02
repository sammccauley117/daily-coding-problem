def isPrime(x):
    for i in range(2,x):
        if x % i == 0: return False
    return True

def primes(n):
    if n <= 0: return []
    ans = [2]
    potential = 3
    while len(ans) < n:
        if isPrime(potential): ans.append(potential)
        potential += 2
    return ans

if __name__ == '__main__':
    n = int(input('n: '))
    print('Result: ', primes(n))
