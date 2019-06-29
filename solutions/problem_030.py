def next_higher(x):
    # Turn off the lowest 1 and turn on the closest 0 to the left of it
    first_one = None # Bit index of the first one to appear in x
    for i in range(32):
        if (x >> i) & 1:
            first_one = i
            x = ~(1 << i) & x
            break
    if first_one == None: return None # There are no ones
    for i in range(first_one + 1, 32):
        if not ((x >> i) & 1):
            x =  x | (1 << i)
            return x
    return None

def next_lower(x):
    # Turn off the lowest 1 and turn on the closest 0 to the right of it
    first_one = None # Bit index of the first one to appear in x
    zero_found = False
    for i in range(32):
        if not ((x >> i) & 1): zero_found = True
        if (x >> i) & 1 and zero_found:
            first_one = i
            x = ~(1 << i) & x
            break
    if first_one == None: return None # There are no ones
    for i in range(first_one - 1, -1, -1):
        if not ((x >> i) & 1):
            x =  x | (1 << i)
            return x
    return None

def next_number(x):
    higher = next_higher(x)
    lower = next_lower(x)
    print('Next Higher:',higher) if higher != None else print('Next Higher: N/A')
    print('Next Lower:',lower) if lower != None else print('Next Lower: N/A')

if __name__ == '__main__':
    x = int(input('Input: '))
    next_number(x)
