# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# 直接遍历两个队列进行拼接
class Solution0:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        l3 = ListNode(val=None)
        tmp = l3
        while l1 and l2:
            if l1.val < l2.val:
                tmp.next = l1
                l1 = l1.next
                tmp = tmp.next
            elif l1.val > l2.val:
                tmp.next = l2
                l2 = l2.next
                tmp = tmp.next
            else:
                tmp.next = l1
                l1 = l1.next
                tmp = tmp.next

                tmp.next = l2
                l2 = l2.next
                tmp = tmp.next
        
        if l1:
            tmp.next = l1
        if l2:
            tmp.next = l2

        return l3.next

