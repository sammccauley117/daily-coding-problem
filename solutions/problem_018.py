def letterCombinations(digits):
    decoder = {
        '2':'abc',
        '3':'def',
        '4':'ghi',
        '5':'jkl',
        '6':'mno',
        '7':'pqrs',
        '8':'tuv',
        '9':'wxyz',
    }

    ret = []
    for i in range(len(digits)):
        if i == 0: # Inital case
            for letter in decoder[digits[i]]:
                ret.append(letter)
        else:      # Otherwise
            newRet = []
            for letter in decoder[digits[i]]:
                for j in range(len(ret)):
                    newRet.append(ret[j]+letter)
            ret = newRet
    return ret

if __name__ == '__main__':
    x = '23'
    print('Input:', x)
    letterCombinations(x)
    print('Output:', x)
