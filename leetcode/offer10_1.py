class Solution:
    def fib(self, n):
        a, b = 0, 1
        c = 0
        for _ in range(2, n+1):
            c = a + b

            a = b
            b = c

        return c % 100000007

tmp = Solution()
print(tmp.fib(20))