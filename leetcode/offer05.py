# 遍历
class Solution1:
    def replaceSpace(self, s: str) -> str:
        tmp_l = []
        for w in s:
            if w == " ":
                tmp_l.append("%20")
            else:
                tmp_l.append(w)

        return ''.join(tmp_l)  # 列表拼接成字符串

# python字符串替换函数
class Solution2:
    def replaceSpace(self, s: str) -> str:
        return s.replace(" ", f"%20")