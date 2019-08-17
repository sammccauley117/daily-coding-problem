class Solution {
    func hammingDistance(_ x: Int, _ y: Int) -> Int {
        var result : Int = 0
        for i in 0..<32 {
            if ((x >> i) & 1) != ((y >> i) & 1) {
                result += 1
            }
        }
        return result
    }
}
