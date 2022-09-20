# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """

        output = []

        def inorder(root):
            if root == None:
                return 0

            inorder(root.left)

            output.append(root.val)

            inorder(root.right)

        inorder(root)
        return output


#time<36.93%
#space<48.62%