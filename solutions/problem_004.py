def romanToInt(s):
    # Variable initialization
    total = 0 # Accumulated sum
    i = 0 # Index
    length = len(s) # Length of original Roman Numeral string

    # Translation dictionaries
    subtractions = {
        'IV': 4,
        'IX': 9,
        'XL': 40,
        'XC': 90,
        'CD': 400,
        'CM': 900
    }
    decoder = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    # Iterate through string to accumulate total
    while i < length:
        if s[i:i+2] in subtractions: # Special subtraction case
            total += subtractions[s[i:i+2]]
            i += 2
        else: # Regular Roman Numeral
            total += decoder[s[i]]
            i += 1
            
    return total

if __name__ == '__main__':
    input = 'IV'
    print('Input:',input)
    print('Result:',romanToInt(input))
