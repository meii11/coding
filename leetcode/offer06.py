# 其实也是哈希的思想
class Solution:
    def reversePrint(self, head: ListNode) -> List[int]:
        hashtable = []

        while head:
            hashtable.append(head.val)
            head = head.next

        return hashtable[-1::-1]

# 递归，感觉递归的本质就是栈，先进后出
class Solution:
    def reversePrint(self, head: ListNode) -> List[int]:
        return self.reversePrint(head.next) + [head.val] if head else []

