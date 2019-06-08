def majorityElement(nums):
    # Variable initialization
    d = {} # Dictionary of elements <element, count>
    majority = int(len(nums)/2) # Ammount needed to be considered the majority

    # Increment dictionary entries until a majority is found
    for num in nums:
        if(num in d):
            x = d[num] + 1 # Variable x used so that we don't have to access the dictionary over and over
            d[num] = x
            if x > majority: return num
        else:
            d[num] = 1

    # Special case: nums only has one element
    return nums[0]

if __name__ == '__main__':
    x = [1,1,1,1,0,0]
    print('Input', x)
    print('Result:', majorityElement(x))
