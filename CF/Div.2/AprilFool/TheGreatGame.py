#!/bin/python
team1 = input().replace('[', '7').replace('(', '6')
team2 = input().replace('[', '7').replace('(', '6')
s = 0
for i in range(0, len(team1), 2):
	if team1[i] > team2[i]:
		s += 1
	elif team1[i] < team2[i]:
		s -= 1
	if team1[i] == '8' and team2[i] == '6':
		s -= 2
	if team1[i] == '6' and team2[i] == '8':
		s += 2
if s > 0:
	print("TEAM 1 WINS")
elif s < 0:
	print("TEAM 2 WINS")
else:
	print("TIE")
