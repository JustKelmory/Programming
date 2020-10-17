a, b, c = input().split()
a = int(a, 10)
c = int(c, 10)
if b == "+":
	print(a + c)
elif b == "-":
	print(a - c)
elif b == "*":
	print(a * c)
elif b == "/" and c != 0:
	print(a / c)
elif c == 0:
	print("На ноль делить запрещено")