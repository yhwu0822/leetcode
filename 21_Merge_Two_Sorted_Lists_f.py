# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        output = ListNode()
        l3 = output
        fst = 1

        if list1 == None and list2 == None:
            output = None

        while list1 != None or list2 != None:

            if fst:
                fst = 0

            else:
                temp = ListNode()
                l3.next = temp
                l3 = l3.next

            if list1 == None:
                l3.val = list2.val
                list2 = list2.next
            elif list2 == None:
                l3.val = list1.val
                list1 = list1.next
            else:
                if list1.val <= list2.val:
                    l3.val = list1.val
                    list1 = list1.next
                else:
                    l3.val = list2.val
                    list2 = list2.next

        return output

#time<34.90%
#space<81.69%