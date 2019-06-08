def sortColors(nums):
    r = 0
    b = len(nums) - 1

    i = 0
    while b >= i:
        if nums[i] == 0:
            temp = nums[r]
            nums[r] = 0
            nums[i] = temp
            r += 1
        if nums[i] == 2:
            temp = nums[b]
            nums[b] = 2
            nums[i] = temp
            i -= 1
            b -= 1
        i += 1

if __name__ == '__main__':
    x = [2,0,2,1,1,0]
    print('Input', x)
    sortColors(x)
    print('Result:', x)
