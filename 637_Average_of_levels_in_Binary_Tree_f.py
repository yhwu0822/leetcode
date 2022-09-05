# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """

        sum = []
        num = []

        def BFS(root, depth):
            if root == None:
                return
            try:
                sum[depth] += root.val
                num[depth] += 1
            except:
                sum.append(root.val)
                num.append(1)

            BFS(root.left, (depth + 1))
            BFS(root.right, (depth + 1))

        BFS(root, 0)
        ans = []
        print(sum)
        print(num)
        for i in range(len(sum)):
            ans.append((float(sum[i]) / num[i]))
        return  ans

#time<76.98%
#space<7.34%