N = int(input())
p = list(map(int, input().split()))
res = 0
for i in range(N):
    if(p[i] == i+1):
        if(p[i] != N):
            p[i], p[i+1] = p[i+1], p[i]
        else:
            p[i-1], p[i] = p[i], p[i-1]
        res += 1

print(res)
