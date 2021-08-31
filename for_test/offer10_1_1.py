class Solution:
    def fib(self, n):
        if n == 0:
            return 0
        elif n == 1:
            return 1
        else:
            tmp = 1
            for i in range(2, n):
                a, b = 0, 1
                tmp += (a+b)
                a, b = b, a+b

            return tmp
        return 0

c = Solution()
print(c.fib(3))