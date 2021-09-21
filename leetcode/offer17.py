# python特性，但不符合题目本意
class Solution:
    def printNumbers(self, n):
        table = []
        for i in range(1, n+1):
            for j in range(10):
                table.append((i-1)*10+j)


        return table[1:]

# print(Solution().printNumbers(11))

class Solution1:
    def printNumbers(self, n):
        def dfs(x):
            if x == n:  # 终止条件：已固定完所有位
                res.append(''.join(num))  # 拼接 num 并添加至 res 尾部
                return
            for i in range(10):  # 遍历 0 - 9
                num[x] = str(i)  # 固定第 x 位为 i
                dfs(x + 1)  # 开启固定第 x + 1 位

        num = ['0'] * n  # 起始数字定义为 n 个 0 组成的字符列表
        res = []  # 数字字符串列表
        dfs(0)  # 开启全排列递归
        return ','.join(res)  # 拼接所有数字字符串，使用逗号隔开，并返回

print(Solution1().printNumbers(3))


# 强
class Solution2:
    def printNumbers(self, n: int) -> [int]:
        def dfs(x):
            if x == n:
                s = ''.join(num[self.start:])
                if s != '0':
                    res.append(int(s))
                if n - self.start == self.nine:
                    self.start -= 1
                return

            for i in range(10):
                if i == 9:
                    self.nine += 1
                num[x] = str(i)
                dfs(x + 1)
            self.nine -= 1

        num, res = ['0'] * n, []
        self.nine = 0
        self.start = n - 1
        dfs(0)
        return res