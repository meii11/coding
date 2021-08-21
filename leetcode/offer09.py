"""
用两个栈实现队列功能
"""

class CQueue:

    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def appendTail(self, value):
        while self.stack1:
            self.stack2.append(self.stack1.pop())
        
        self.stack1.append(value)

        while self.stack2:
            self.stack1.append(self.stack2.pop())


    def deleteHead(self):
        if not self.stack1:
            return -1

        return self.stack.pop()