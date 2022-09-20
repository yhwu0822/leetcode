# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        output = ListNode(next=ListNode())
        l3 = output

        while l1 != None or l2 != None:
            tempNode = ListNode(val=0)
            l3.next = tempNode
            if l1 == None:
                temp = l2.val + l3.val
                if temp >= 10:
                    l3.next.val += 1
                    l3.val = (temp - 10)
                else:
                    l3.val = temp
                l2 = l2.next

            elif l2 == None:
                temp = l1.val + l3.val
                if temp >= 10:
                    l3.next.val += 1
                    l3.val = (temp - 10)
                else:
                    l3.val = temp
                l1 = l1.next

            else:
                temp = l1.val + l2.val + l3.val
                if temp >= 10:
                    l3.next.val += 1
                    l3.val = (temp - 10)
                else:
                    l3.val = temp
                l1 = l1.next
                l2 = l2.next

            if (l3.next.val == 0) and (l1 == None) and (l2 == None):
                l3.next = None
            else:
                l3 = l3.next

        return output

#time<30.67%
#space<17.15%
