class Solution:
    def maxProfit(self, prices):
        tmp = 0
        
        for i in range(len(prices)):
            for j in range(i+1, len(prices)):
                if prices[j] - prices[i] > tmp:
                    tmp = prices[j] - prices[i]
        
        return tmp

p = Solution()

print(p.maxProfit([7,1,5,3,6,4]))