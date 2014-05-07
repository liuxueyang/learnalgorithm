a = list(input())
b = list("AHIMOTUVWXY")
flag = True
for i in a:
    if i not in b:
        flag = False
        break
for i in range(len(a)//2):
    if a[i] != a[len(a)-1-i]:
        flag = False
        break
if flag:
    print("YES")
else:
    print("NO")