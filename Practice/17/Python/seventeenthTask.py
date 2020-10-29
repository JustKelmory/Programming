def get_numbers():
    return 37


def get_k():
    return 12


count = {}
last_round = {}
for i in range(get_numbers()):
    count[i] = last_round[i] = 0
highest_number = round_now = reds = blacks = 0
while (True):
    round_now += 1
    inp = int(input())
    if inp < 0:
        break
    count[inp] += 1
    last_round[input] = round_now
    highest_number = max(count.values())
    for i in range(get_numbers()):
        if count[i] == highest_number:
            print(i, end=' ')
    print()
    for i in range(get_numbers()):
        if last_round[i] == 0 or round_now - last_round[i] > get_k():
            print(i, end=' ')
    print()
    if inp != 0:
        if inp <= 10 or (inp > 18 and inp <= 28):
            if inp % 2 == 1:
                reds += 1
            else:
                blacks += 1
        else:
            if inp % 2 == 0:
                reds += 1
            else:
                blacks += 1

    print(reds, blacks, '\n')