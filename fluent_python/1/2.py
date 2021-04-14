from math import hypot  # sqrt(x*x + y*y)


class Vector:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __repr__(self):
        return "Vector(%r, %r)" % (self.x, self.y)  # The %s specifier converts the object using str(), and %r converts it using repr().

    def __abs__(self):
        return hypot(self.x, self.y)

    def __bool__(self):  # python 为了判断一个值x为真还是为假，会调用bool(x)
        return bool(abs(self))

    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y

        return Vector(x, y)

    def __mul__(self, other):
        return Vector(self.x * other, self.y * other)

