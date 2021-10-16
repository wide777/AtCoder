S = input()
O = []
X = []
for i in range(len(S)):
    if(S[i] == 'o'):
        O.append(str(i))
    if(S[i] == 'x'):
        X.append(str(i))
ans = 0
for i in range(10000):
    s = str(i).zfill(4)
    flag = True
    for o in O:
        if(o not in s):
            flag = False
    for x in X:
        if(x in s):
            flag = False
    ans += flag
print(ans)
