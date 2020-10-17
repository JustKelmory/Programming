a = list(map(int, input().split()))
g = 9.8
print("Рассчитанное расстояние ", a[0]+a[1]*a[2]-(g*a[2]*a[2])/2)