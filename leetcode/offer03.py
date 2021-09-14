# 双重遍历，o(n^2)
class Solution1:
    def findRepeatNumber(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            if nums[i] in nums[i+1:]:
                return nums[i]

        return -1

# 哈希表
class Solution2:
    def findRepeatNumber(self, nums: List[int]) -> int:
        hashtable = set()

        for num in nums:
            if num not in hashtable:
                hashtable.add(num)

            else:
                return num
        return -1