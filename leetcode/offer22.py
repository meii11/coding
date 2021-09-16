# 快慢指针
class Solution:
    def getKthFromEnd(self, head: ListNode, k: int) -> ListNode:
        left, right = head, head

        while True:
            for _ in range(k-1):
                right = right.next
            if right.next is None:
                return left
            else:
                left = left.next
                right = left

# 双指针同时前进
class Solution1:
    def getKthFromEnd(self, head: ListNode, k: int) -> ListNode:
        q, p = head, head
        for _ in range(k):
            p = p.next
        while p:
            q = q.next
            p = p.next

        return q