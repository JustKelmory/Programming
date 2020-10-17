n = int(input())
r = 0
for i in range(n):
	if 2 ** i <= n:
		r += 1
print(r)