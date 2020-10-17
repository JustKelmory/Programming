a = int(input())
counter = 0
i = 1
while i <= a:
	if a % i == 0:
		counter += 1
	else:
		pass
	i += 1
if counter >= 3:
	print("Составное")
else:
	print("Простое")