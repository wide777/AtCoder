from collections import defaultdict

N = int(input())
d = defaultdict(int)
for i in range(N):
    A = int(input())
    d[A] += 1
res = 0
for v in d.values():
    res += (1 if v % 2 == 1 else 0)
print(res)
