class Solution {
    func isValid(_ s: String) -> Bool {
        var stack : [Character] = []

        for c in s {
            if c == "(" || c == "[" || c == "{" {
                stack.append(c)
            } else if stack.count == 0 {
                return false
            } else {
                if c == ")" && stack.last == "(" {
                    stack.removeLast()
                } else if c == "]" && stack.last == "[" {
                    stack.removeLast()
                } else if c == "}" && stack.last == "{" {
                    stack.removeLast()
                } else {
                    return false
                }
            }
        }

        return stack.count == 0
    }
}
