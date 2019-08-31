class Solution {
    func swap(_ nums: inout [Int], _ left: Int, _ right: Int) {
        var temp: Int = nums[left]
        nums[left] = nums[right]
        nums[right] = temp
    }

    func sortColors(_ nums: inout [Int]) {
        if nums.count == 0 || nums.count == 1 {
            return
        }

        var left = 0
        var right = nums.count - 1

        var i = 0
        while right >= i {
            if nums[i] == 0 {
                self.swap(&nums, i, left)
                left += 1
            }
            if nums[i] == 2 {
                self.swap(&nums, i, right)
                right -= 1
                i -= 1
            }
            i += 1
        }
    }
}
