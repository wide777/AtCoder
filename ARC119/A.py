N = int(input())
X = N
b = 0
while X > 1:
    b += 1
    X = X//2

res = 1000000000000000001
for i in range(b):
    a = N//pow(2, i)
    c = N % pow(2, i)
    res = min(res, a+i+c)
print(res if res != 1000000000000000001 else 1)
