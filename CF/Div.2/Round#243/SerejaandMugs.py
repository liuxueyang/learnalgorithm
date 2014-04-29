#!/bin/python
n, s = (list)(map(int, input().split(' ')))
a = (list)(map(int, input().split(' ')))
maxofa = max(a)
sumofa = sum(a)
if sumofa - maxofa <= s:
	print("YES")
else:print("NO")
