open class HashableClass {
    public init() {}
}

extension HashableClass: Hashable {
    public func hash(into hasher: inout Hasher) {
        hasher.combine(ObjectIdentifier(self).hashValue)
    }
}

extension HashableClass: Equatable {
    public static func ==(lhs: HashableClass, rhs: HashableClass) -> Bool {
        return ObjectIdentifier(lhs) == ObjectIdentifier(rhs)
    }
}

class ListNode : HashableClass {
    public var val: Int
    public var next: ListNode?
    public init(_ val: Int) {
        self.val = val
        self.next = nil
    }
}

func circularNode(_ head : ListNode) -> ListNode? {
    var curr : ListNode? = head
    var s = Set<ListNode>()

    while curr != nil {
        if s.contains(curr!) {
            return curr
        } else {
            s.insert(curr!)
        }
        curr = curr!.next
    }

    return nil
}

var a = ListNode(1)
var b = ListNode(2)
var c = ListNode(3)
var d = ListNode(3)
var e = ListNode(4)
var f = ListNode(5)
var g = ListNode(5)

a.next = b
b.next = c
c.next = d
d.next = e
e.next = f
f.next = g
g.next = c

print("Result: \(circularNode(a)!.val)")
