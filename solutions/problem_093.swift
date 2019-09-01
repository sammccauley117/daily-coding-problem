class Solution {
    func hammingWeight(_ n: Int) -> Int {
        var ans: Int = 0
        for i in 0..<32 {
            if n>>i & 1 == 1 { ans += 1 }
        }
        return ans
    }

    func grayCode(_ n: Int) -> [Int] {
        if n == 0 { return [0] }
        if n == 1 { return [0,1] }
        var res: [Int] = [0,1]
        for i in 2...n {
            var min: Int = Int(pow(2.0, Double(i-1)))
            var max: Int = Int(pow(2.0, Double(i)))
            var possible: [Int] = Array(min..<max)
            while possible.count > 0 {
                var lastWeight: Int = self.hammingWeight(res.last!)
                for j in 0..<possible.count {
                    let val: Int = possible[j]
                    if abs(lastWeight - self.hammingWeight(val)) == 1 {
                        res.append(val)
                        possible.remove(at:j)
                        break
                    }
                }
            }
        }
        return res
    }
}
