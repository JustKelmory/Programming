t1 = list(map(int, input().split(':')))
t2 = list(map(int, input().split(':')))
r1 = t1[0] * 60 + t1[1]
r2 = t2[0] * 60 + t2[1]
if r2 - r1 <= 15:
	print("Встреча состоится.")
else:
	print("Встреча не состоится.")