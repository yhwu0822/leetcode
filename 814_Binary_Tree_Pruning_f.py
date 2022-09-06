# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def pruneTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: Optional[TreeNode]
        """

        def downTop(root):
            if root == None:
                return False
            LC = downTop(root.left)
            if LC == False:
                root.left = None
            RC = downTop(root.right)
            if RC == False:
                root.right = None
            if root.val == 0:
                return LC | RC
            else:
                return True

        temp = downTop(root)
        if temp == False:
            root = None
            return root
        return root


#time<70.18%
#space<8.77%