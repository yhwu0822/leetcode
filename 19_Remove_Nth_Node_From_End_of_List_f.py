# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """

        pointer = head
        length = 0
        target = 0

        while pointer != None:
            length += 1
            pointer = pointer.next

        if length <= 1:
            head = None
            return head

        skiphead = length - n

        pointer = head
        if skiphead > 0:
            for i in range(skiphead - 1):
                pointer = pointer.next
            pointer.next = pointer.next.next
        else:
            head = head.next

        return head