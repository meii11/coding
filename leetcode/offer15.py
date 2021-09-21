# 笨方法
class Solution1:
    def hammingWeight(self, n):
        n = int(n)
        _n = str(n)
        i = 0
        for nn in _n:
            if nn == '1':
                i += 1

        return i


# a = Solution()
#
# print(a.hammingWeight("00000000000000000000000000001011"))


# 按位与，学到了
class Solution2:
    def hammingWeight(self, n: int) -> int:
        res = 0
        while n:
            res += n & 1
            n >>= 1
        return res
