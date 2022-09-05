# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        oneStep = head
        twoStep = head
        while twoStep != None:
            try:
                twoStep = twoStep.next.next
                oneStep = oneStep.next
            except:
                break

        return oneStep


#time<96.64%
#space<8.43%