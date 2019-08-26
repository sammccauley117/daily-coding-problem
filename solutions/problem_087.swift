func isPermuation(_ str : String) -> Bool {
    var d = Dictionary<Character, Int>()
    var oddAllowed = true

    for c in str {
        if c != " " {
            if d[c] == nil {
                d[c] = 1
            } else {
                d[c]! = d[c]! + 1
            }
        }
    }

    for (_, count) in d {
        if count % 2 == 1 {
            if oddAllowed {
                oddAllowed = false
            } else {
                return false
            }
        }
    }

    return true
}

isPermuation("tact coa")
