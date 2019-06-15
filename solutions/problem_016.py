def removeDuplicates(nums):
    i = 0
    last = None
    l = len(nums)
    while i < l:
        if nums[i] == last:
            nums.pop(i)
            l -= 1
        else:
            last = nums[i]
            i += 1
    return l

if __name__ == '__main__':
    x = [1,1,1,2,2,3,4,5,5,5,6,7]
    print('Input:', x)
    removeDuplicates(x)
    print('Output:', x)
