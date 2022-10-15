class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        return root.val == targetSum if root and not root.left and not root.right else root and (self.hasPathSum(root.right, targetSum - root.val) or self.hasPathSum(root.left, targetSum - root.val))
