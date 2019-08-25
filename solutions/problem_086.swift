func isPermutation(_ str1 : String, _ str2 : String) -> Bool {
    var d1 = Dictionary<Character, Int>()
    var d2 = Dictionary<Character, Int>()

    for c in str1 {
        if d1[c] == nil {
            d1[c] = 1
        } else {
            d1[c] = d1[c]! + 1
        }
    }

    for c in str2 {
        if d2[c] == nil {
            d2[c] = 1
        } else {
            d2[c] = d2[c]! + 1
        }
    }

    return d1 == d2
}

isPermutation("abcdef", "bcadef")
