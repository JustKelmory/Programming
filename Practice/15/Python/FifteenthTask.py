import random
while True:
    a = int(random.random() * 101)
    win = False

    print("Случайное число было успешно загадано")

    for i in range(5):
        b = int(input())
        if b > a:
            print("Загаданное число меньше")
        elif b < a:
            print("Загаданное число больше")
        else:
            print("Вы выиграли!")
            win = True
            break
    if not win:
        print("Вы проиграли. Загаданное число:", a)
    i = int(input("Хотите начать сначала? (1 - ДА)\n"))
    if i != 1:
        break