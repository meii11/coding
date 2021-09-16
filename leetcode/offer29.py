# 循环打印，用到了四个指针
class Solution0:
    def spiralOrder(self, matrix: [[int]]) -> [int]:
        if not matrix:
            return []
        l, r, t, b, res = 0, len(matrix[0]) - 1, 0, len(matrix) - 1, []
        while True:
            for i in range(l, r + 1):
                res.append(matrix[t][i])  # left to right
            t += 1
            if t > b:
                break

            for i in range(t, b + 1):
                res.append(matrix[i][r])  # top to bottom
            r -= 1
            if l > r:
                break

            for i in range(r, l - 1, -1):
                res.append(matrix[b][i])  # right to left
            b -= 1
            if t > b:
                break

            for i in range(b, t - 1, -1):
                res.append(matrix[i][l])  # bottom to top
            l += 1
            if l > r:
                break
        return res


class Solution1:
    def spiralOrder(self, matrix):
        res = []
        while matrix:
            res += matrix.pop(0)
            # tmp = *matrix
            # 该函数返回一个以元组为元素的列表，其中第 i 个元组包含每个参数序列的第 i 个元素
            a = zip(*matrix)
            a = list(a)

            matrix = list(zip(*matrix))[::-1]
        return res

print(Solution1().spiralOrder(matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]))