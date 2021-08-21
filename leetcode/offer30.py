"""
实现栈的功能同时添加min，但是这里有bug是min函数的时间复杂度是o(n)
"""

class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []


    def push(self, x):
        self.stack.append(x)

    def pop(self):
        self.stack.pop(-1)

    def top(self):
        return self.stack[-1]

    def min(self):
        return min(self.stack)