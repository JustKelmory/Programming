import math
print("Введите три числа")
a = int(input())
b = int(input())
c = int(input())
d = (b*b - 4*a*c)
if a == 0 and b == 0 and c == 0:
	print("Все корни действительны")
elif a == 0 or (a == 0 and c == 0):
	print("x1 = ", -c/b)
elif d < 0:
	print("Действительных корней нет")
elif d == 0:
	print("x1 = ", -b/(2*a))
elif d > 0:
	print("x1 = ", (-b+math.sqrt(d))/(2*a), "\n", "x2 = ", (-b-math.sqrt(d))/(2*a))