"""
这里的思路就比较清晰，他维护一个栈（数组），只保存比当前值小的数，并且随着pop操作一起更新自己的值
"""

class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []
        self.min_s = []

    def push(self, x):
        self.stack.append(x)

        if not self.min_s or self.min_s[-1] >= x:
            self.min_s.append(x)

    def pop(self):
        if self.stack.pop() == self.min_s[-1]:
            self.min_s.pop()
        
    def top(self):
        return self.stack[-1]

    def min(self):
        return self.min_s[-1]
