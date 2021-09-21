
# 快慢指针
class Solution0:
    def exchange(self, nums: List[int]) -> List[int]:
        slow, fast = 0, 0

        while fast < len(nums):
            if nums[fast] % 2 == 1:
                nums[slow], nums[fast] = nums[fast], nums[slow]
                slow += 1

            fast += 1

        return nums



# 用双端队列，有点秀
class Solution1:
    def exchange(self, nums: List[int]) -> List[int]:
        queue = collections.deque()

        for num in nums:
            queue.appendleft(num) if num % 2 == 1 else queue.append(num)

        return list(queue)
