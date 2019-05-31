def twoSum(nums, target):
    need = {}

    for i in range(len(nums)):
        if nums[i] in need:
            return [need[nums[i]], i]
        need[target - nums[i]] = i

if __name__ == '__main__':
    input = [2,7,11,15]
    target = 9
    print('Input:', input)
    print('Target:', target)
    print('Result:', twoSum(input, target))
