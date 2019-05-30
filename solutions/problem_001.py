def atoi(str):
    # Clean up whitespace
    str = str.strip() # Remove initial/tailing whitespace
    if not str: return 0 # Return 0 if str was only whitespace

    # Check for initial sign
    res = '' # Result
    if str[0] is '+' or str[0] is '-':
        res = str[0]
        str = str[1:]

    # Get the initial numbers
    if not str or not str[0].isdecimal(): return 0 # Return 0 if first non-sign char isn't a number
    for c in str:
        if not c.isdecimal(): break
        else: res += c

    # Compute result and return
    res = int(res)
    if res > 2147483647: return 2147483647
    if res < -2147483648: return -2147483648
    return res

if __name__ == '__main__':
    while 1:
        str = input("Enter a string: ")
        print('Result:', atoi(str), '\n')
