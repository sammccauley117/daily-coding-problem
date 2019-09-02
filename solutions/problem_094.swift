/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public var val: Int
 *     public var left: TreeNode?
 *     public var right: TreeNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.left = nil
 *         self.right = nil
 *     }
 * }
 */
class Solution {
    /* func getDepth(_ node: TreeNode, _ depth: Int) -> Int {
        var left: Int = depth
        var right: Int = depth

        if node.left != nil {
            left = self.getDepth(node.left!, depth+1)
        }
        if node.right != nil {
            right = self.getDepth(node.right!, depth+1)
        }

        return left < right ? right : left
    } */

    func maxDepth(_ root: TreeNode?) -> Int {
        if root == nil { return 0 }

        let left = self.maxDepth(root?.left) + 1
        let right = self.maxDepth(root?.right) + 1

        return left < right ? right : left
    }
}
