# 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。

# 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

# 你可以按任意顺序返回答案。

# 来源：力扣（LeetCode）
# 链接：https://leetcode-cn.com/problems/two-sum
# 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


def twoSum(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]

print(twoSum([3, 2, 4], 6))

# 当然也可以用数组，时间复杂度为o(n)

def twoSum2(nums, target):
    for i in range(len(nums)):
        tmp = target - nums[i]
        if tmp in nums[i+1:]:
            return i, nums.index(tmp)

print(twoSum2([3, 2, 4], 6))
