public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init(_ val: Int) {
        self.val = val
        self.next = nil
    }
}

func removeDuplicates(_ head : ListNode) {
    var previous : ListNode?
    var curr : ListNode? = head
    var s = Set<Int>()

    while curr != nil {
        if s.contains(curr!.val) {
            previous!.next = curr!.next
        } else {
            s.insert(curr!.val)
            previous = curr
        }
        curr = curr!.next
    }
}

func listStr(_ head : ListNode) -> String {
    var curr : ListNode? = head
    var l = [Int]()

    while curr != nil {
        l.append(curr!.val)
        curr = curr!.next
    }

    return "\(l)"
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

print("Original Linked List: \(listStr(a))")
removeDuplicates(a)
print("Linked List with duplicates removed: \(listStr(a))")
