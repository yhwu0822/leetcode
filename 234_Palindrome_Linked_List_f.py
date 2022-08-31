# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        stack = ""
        stack += str(head.val)
        while head.next:
            head = head.next
            stack += str(head.val)
        print(stack)
        for i in range(int(len(stack) / 2)):
            if stack[i] != stack[-(i + 1)]:
                return False
        return True

        # 一開始想省空間但想不出來
        # if head.next == None:
        #     return True
        # i = 0
        # need = stack[i]
        # while head.next:
        #     if need != str(head.next.val):
        #         stack += str(head.next.val)
        #         i += 1
        #         need = stack[i]
        #     else:
        #         stack += str(head.next.val)
        #         i -= 1
        #         if i < 0:
        #             return True
        #         else:
        #             need = stack[i]
        #             if need != str(head.next.val):
        #     head = head.next
        # return False
