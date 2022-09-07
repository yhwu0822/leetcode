# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def tree2str(self, root):
        """
        :type root: TreeNode
        :rtype: str
        """

        def prefix(string, node):
            if node == None:
                return "+"
            left = prefix("", node.left)
            right = prefix("", node.right)

            if (left == "+") & (right == "+"):
                string = string + str(node.val)
            elif (left == "+") & (right != "+"):
                string = string + str(node.val) + "()(" + right + ")"
            elif (left != "+") & (right == "+"):
                string = string + str(node.val) + "(" + left + ")"
            else:
                string = string + str(node.val) + "(" + left + ")(" + right + ")"
            return string

        return prefix("", root)

#time<10.45%
#space<22.39%