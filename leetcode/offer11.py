# python特性，直接使用min
class Solution0:
    def minArray(self, numbers: List[int]) -> int:
        return min(numbers)

# 可以先排序，再输出第一个元素，这样速度和占用更快
class Solution1:
    def minArray(self, numbers: List[int]) -> int:
        numbers.sort()
        return numbers[0]

# 二分查找 本质上是由于 jj 初始值肯定在右排序数组中； ii 初始值无法确定在哪个排序数组中
class Solution2:
    def minArray(self, numbers: List[int]) -> int:
        left, right = 0, len(numbers) - 1

        while left < right:
            mid = left + (right - left)//2
            if numbers[mid] < numbers[right]:
                right = mid
            elif numbers[mid] > numbers[right]:
                left = mid + 1
            else:
                right -= 1

        return numbers[left]
