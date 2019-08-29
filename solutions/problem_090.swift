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

var head: Node = Node(1)
head.append(2)
head.append(3)
head.append(4)
head.append(5)
print(head.toStr())
