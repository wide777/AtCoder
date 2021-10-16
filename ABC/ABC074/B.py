N, K = [int(input()) for i in range(2)]
x = list(map(int, input().split()))

res = 0
for i in x:
    res += (i*2 if i < (K-i) else (K-i)*2)
print(res)
