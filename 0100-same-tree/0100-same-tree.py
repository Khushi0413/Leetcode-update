class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p and not q:          # both empty
            return True
        if not p or not q:           # only one is empty
            return False
        if p.val != q.val:           # values differ
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)