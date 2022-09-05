#第一次的方法太慢 再試一次

"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""


class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """

        tree = []
        if root == None:
            return []
        temp = [root]
        while temp:
            level = []
            nodes = []
            for node in temp:
                level.append(node.val)
                if node.children != None:
                    for child in node.children:
                        nodes.append(child)
            tree.append(level)
            temp = nodes
        return tree

#time<87.70%
#space<90.85%

#之前遞迴太耗時