# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:

    def isSymmetric(self, root: TreeNode) -> bool:
        def _isSame(root1, root2):
            if not root1 and not root2:  # 这里和下面要注意条件判断先后顺序！
                return True
            elif not root1 or not root2 or root1.val != root2.val:
                return False
            else:
                return _isSame(root1.left, root2.right) and _isSame(root1.right, root2.left)

        if root is None:
            return True

        return _isSame(root.left, root.right)
