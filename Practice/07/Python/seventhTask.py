import math
k = int(input())
if k == 1:
	a = int(input())
	b = int(input())
	c = int(input())
	print("S = ", (a+b+c)/2)
elif k == 2:
	point1 = list(map(int, input().split()))
	point2 = list(map(int, input().split()))
	point3 = list(map(int, input().split()))
	a = math.sqrt((point3[0] - point1[0]) * (point3[0] - point1[0]) + (point3[1] - point1[1]) * (point3[1] - point1[1]))
	b = math.sqrt((point2[0] - point1[0]) * (point2[0] - point1[0]) + (point2[1] - point1[1]) * (point2[1] - point1[1]))
	c = math.sqrt((point3[0] - point2[0]) * (point3[0] - point2[0]) + (point3[1] - point2[1]) * (point3[1] - point2[1]))
	if (a + b > c) and (a + c > b) and (c + b > a):
		p = (a + b + c) / 2
		S = math.sqrt(p * (p - a) * (p - b) * (p - c))
		print("S = ", S)
	else:
		print("Данного треугольника не существует")