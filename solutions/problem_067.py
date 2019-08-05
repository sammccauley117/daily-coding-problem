def isValid(s):
    stack = []
    
    for c in s:
        if c == '(' or c == '[' or c == '{':
            stack.append(c)
        elif len(stack) == 0:
            return False
        elif c == ')' and stack[-1] == '(':
            stack.pop()
        elif c == ']' and stack[-1] == '[':
            stack.pop()
        elif c == '}' and stack[-1] == '{':
            stack.pop()
        else:
            return False

    return len(stack) == 0

if __name__ == '__main__':
    x = input('Input: ')
    print('Output:', isValid(x))
