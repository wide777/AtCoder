from collections import defaultdict

N = int(input())
A = list(map(int, input().split()))
d = defaultdict(int)

for i in range(N):
    d[A[i]] += 1

h = w = 0
for t in d.items():
    if t[1] >= 4:
        if h < t[0]:
            h = w = t[0]
    elif t[1] >= 2:
        if h < t[0]:
            h = t[0]
        elif w < t[0]:
            w = t[0]
        if(h > w):
            h, w = w, h

print(h*w)
