n = int(input().strip())
numbers = map(int, input().strip().split(" "))
result = []
for elem in numbers:
    for i in range(6):
        if i >= len(result) or i == 5:
            break
        if elem > result[i]:
            result.insert(i, elem)
            break
    if i == 5 or i == len(result):
        result.append(elem)
    if len(result) > 5:
        result.pop(0)
    for item in result: print(item, end=" ")
    print()