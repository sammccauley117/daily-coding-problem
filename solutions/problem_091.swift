class Node {
    var data: Int
    var next: Node?
    var previous: Node?

    init(_ data: Int) {
        self.data = data
        self.next = nil
        self.previous = nil
    }

    func append(_ data: Int) {
        var curr: Node = self
        while curr.next != nil {
            curr = curr.next!
        }
        curr.next = Node(data)
        curr.next!.previous = curr
    }

    func toStr() -> String {
        var curr: Node? = self
        var result: String = ""

        while curr != nil {
            if curr!.next == nil {
                result += "\(curr!.data)"
            } else {
                result += "\(curr!.data) <-> "
            }
            curr = curr!.next
        }

        return result
    }
}

func isPalindrome(_ head: Node?) -> Bool {
    if head == nil {
        return true
    }

    var left: Node = head!
    var right: Node = head!
    var count: Int = 1

    while right.next != nil {
        count += 1
        right = right.next!
    }

    for _ in 0..<count/2 {
        if left.data != right.data {
            return false
        }
        left = left.next!
        right = right.previous!
    }

    return true
}

var head: Node = Node(1)
head.append(2)
head.append(3)
head.append(2)
head.append(1)
print(head.toStr())
print(isPalindrome(head) ? "Is a palindrome" : "Is not a palindrome")
print()
head.append(9)
print(head.toStr())
print(isPalindrome(head) ? "Is a palindrome" : "Is not a palindrome")
