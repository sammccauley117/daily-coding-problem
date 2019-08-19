class Solution {
    func lengthOfLastWord(_ s: String) -> Int {
        var count : Int = 0
        var ws : Bool = true

        for c in s.reversed() {
            if c != " " {
                ws = false
                count += 1
            } else if c == " " && !ws {
                break
            }
        }
        return count
    }
}
