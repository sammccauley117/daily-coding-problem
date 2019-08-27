func binary(_ n: Int) -> String {
    var res : String = ""

    for i in 1...32 {
        if 1 & n >> (32 - i) == 1 {
            res += "1"
        } else {
            res += "0"
        }
    }

    return res
}

func nextLower(_ n: Int) -> Int {
    var firstOne: Int?
    var zeroFound: Bool = false
    var res: Int = n

    for i in 0..<32 {
        if n >> i & 1 == 0 {
            zeroFound = true
        }
        if n >> i & 1 == 1 && zeroFound {
            firstOne = i
            res = ~(1 << i) & n
            break
        }
    }

    if firstOne == nil {
        return n
    }

    for i in stride(from: firstOne! - 1, through: 0, by: -1) {
        if n >> i & 1 == 0 {
            res = res | (1 << i)
            return res
        }
    }

    return n
}

func nextHigher(_ n: Int) -> Int {
    var firstOne: Int?
    var res: Int = n

    for i in 0..<32 {
        if n >> i & 1 == 1 {
            firstOne = i
            res = ~(1 << i) & res
            break
        }
    }

    if firstOne == nil {
        return n
    }

    for i in firstOne!+1..<32 {
        if n >> i & 1 == 0 {
            res = res | (1 << i)
            return res
        }
    }

    return n
}

print("Original number: \(binary(10))")
print("Next higher:     \(binary(nextHigher(10)))")
print("Next lower:      \(binary(nextLower(10)))")
