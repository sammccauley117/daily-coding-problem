def palindrome_permutation(s):
    # This algorithm works by creating a dictionary that documents the number of
    # occurences of each character. In order for this to be a valid permutation
    # each character must occur an even number of times with the exception of one
    # odd occurence (if the input string was an odd length)
    d = {} # Dictionary of characters and how many times they appear in the string
    odd_allowed = len(s) % 2 == 1 # True if an odd character count is allowed in the dictionary

    # Count the number of occurences of each character
    for c in s:
        if c in d: d[c] += 1
        else: d[c] = 1

    # Check the dictionary
    for count in d.values():
        if count % 2 == 1:
            if odd_allowed: odd_allowed = False # Only one odd occurence is allowed, after this no more are
            else: return False

    return True

if __name__ == '__main__':
    x = input('Input: ')
    print('Output:', palindrome_permutation(x))
