class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var d : [Int:Int] = [:]
        for i in 0..<nums.count {
            if let pair = d[nums[i]] {
                return [pair, i]
            }
            d[target - nums[i]] = i
        }
        return []
    }
}
