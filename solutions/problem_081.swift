import UIKit

func isUnique(_ str : String) -> Bool {
    var d = Set<Character>()
    for c in str {
        if d.contains(c) {
            return false
        } else {
            d.insert(c)
        }
    }
    return true
}

print(isUnique("Hello World!"))
