class Solution:
    def minCostClimbingStairs(self, cost):
        a, b = cost[0], min(a, cost[1])
        c, tmp = 0, 0

        for i in range(2, len(cost)+1):
            tmp = min(a+cost[i], b)

            c += tmp

            a = b
            b = c

        return c

print(Solution().minCostClimbingStairs([1, 100, 1, 1, 1, 100, 1, 1, 100, 1]))