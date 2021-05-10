from collections import Counter

N = int(input())
a = list(map(int, input().split()))
b = list(map(lambda x: x - 1, a))
c = list(map(lambda x: x + 1, a))
a = a+b+c
c = Counter(a)
print(c.most_common()[0][1])
