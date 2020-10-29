class Alcohol:
    def __init__(self):
        self.value = 0.0
        self.volume = 0.0
        self.name = ""


money = int(input())
n = int(input())

result = Alcohol()
inp = Alcohol()

for i in range(n):
    inp.name = input()
    inp.value = int(input())
    inp.volume = int(input())
    liters = (money // inp.value) * inp.volume
    if liters == 0:
        continue

    if result.value == 0:
        result = inp
        continue
    result_liters = (money // result.value) * result.volume
    if liters > result_liters:
        result = inp

if result.value == 0:
    print(-1)
else:
    bottles = money // result.value
    print(result.name, bottles, "\n", bottles * result.volume, "\n",
           money - result.value * bottles)