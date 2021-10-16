S = input()
ss = set(S)
for i in range(26):
    if(chr(ord('a') + i) not in ss):
        print(chr(ord('a') + i))
        exit(0)
print(None)
