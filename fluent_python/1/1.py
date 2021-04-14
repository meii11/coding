import collections  # collections模块实现一些特定的数据类型，可以替代Python中常用的内置数据类型如dict, list, set, tuple，简单说就是对基本数据类型做了更上一层的处理。
from random import choice  # 从一个序列中随机选取一个元素

# 这里的意思就是创建一个名为Card的tuple（具名元组），其中每一个元素名为rank和suit
# 用于构建只有少数属性，但没有方法的对象，比如数据库条目
Card = collections.namedtuple("Card", ["rank", "suit"])


class FrenchDeck:
    ranks = [str(n) for n in range(2, 11)] + list("JQKA")
    suits = "spades diamonds clubs hearts".split()

    def __init__(self):
        self._cards = [Card(rank, suit) for suit in self.suits for rank in self.ranks]

    def __len__(self):
        return len(self._cards)

    def __getitem__(self, position):
        return self._cards[position]


if __name__ == '__main__':
    deck = FrenchDeck()
    print(len(deck))
    print(choice(deck))

    suit_values = dict(spades=3, hearts=2, diamonds=1, clubs=0)


    def spades_high(card):
        rank_value = FrenchDeck.ranks.index(card.rank)
        # print(len(suit_values))
        return rank_value * len(suit_values) + suit_values[card.suit]

    for card in sorted(deck, key=spades_high):
        print(card)
