func isUnique(_ str: String) -> Bool {
    var set = Array(repeating: 0, count: 128)

    for c in str {
        let i = Int(c.asciiValue!)
        if set[i] == 1 {
            return false
        } else {
            set[i] = 1
        }
    }

    return true
}

var str1 = "Unique str"
var str2 = "Not unique str"

print("str1 = \"\(str1)\"")
print("isUnique(): \(isUnique(str1))")
print()
print("str2 = \"\(str2)\"")
print("isUnique(): \(isUnique(str2))")
