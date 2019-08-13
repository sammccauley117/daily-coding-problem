class Solution {
    func reverse(_ x: Int) -> Int {
        var result : String = ""
        let xStr : String = String(x)

        if x < 0 {
            result += "-"
            for i in 0..<(xStr.count-1) {
                let index = xStr.index(xStr.startIndex, offsetBy: (xStr.count - i - 1))
                result += String(xStr[index])
            }
        } else {
            for i in 0..<xStr.count {
                let index = xStr.index(xStr.startIndex, offsetBy: (xStr.count - i - 1))
                result += String(xStr[index])
            }
        }

        let resultInt : Int? = Int(result)

        if let r = resultInt {
            if r > 2147483647 || r < -2147483648 {
                return 0
            }
            return r
        }
        
        return 0
    }
}
