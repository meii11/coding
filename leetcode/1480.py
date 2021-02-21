class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum = []
        for i in range(len(nums)):
            if i == 0:
                sum.append(nums[i])

            else:
                tmp = sum[-1]
                tmp = nums[i] + tmp
                sum.append(tmp)

        return sum


class Solution1:
    def runningSum(self, nums: List[int]) -> List[int]:
        for i in range(1, len(nums)):
            nums[i] = nums[i] + nums[i-1]
        return nums


class Solution2:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum_list = []
        tmp = 0
        for i in range(len(nums)):
            tmp += nums[i]
            sum_list.append(tmp)
        
        return sum_list