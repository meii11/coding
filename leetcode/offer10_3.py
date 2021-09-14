# 动态规划，上n台阶只有两种方法，一种是从n-1一步上，另一种是从n-2两步上来
class Solution:
    def numWays(self, n: int) -> int:
        if n < 2:
            return 1
        a, b = 1, 1
        c = 0
        for _ in range(2, n+1):
            c = a + b

            b = a
            a = c

        return c % 1000000007