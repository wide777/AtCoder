N = int(input())
S = input()
T = input()

if(S.count('0') != T.count('0')):
    print(-1)
    exit(0)

L1 = []
L2 = []
res = 0
for i in range(N):
    if(S[i] == '0'):
        L1.append(i)
    if(T[i] == '0'):
        L2.append(i)

for i in range(len(L1)):
    if(L1[i] != L2[i]):
        res += 1
print(res)
