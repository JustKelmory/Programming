sp = [0]*36
co = []
a = int(input())
while a > 0:
    red = 0
    black = 0
    co.append(a)
    if len(co) > 12:
        co.pop(0)
        sp[a] += 1
    vs = list(sp)
    svs = (sorted(vs))
    svs = svs[::-1]
    for i in range(len(svs)):
        if svs[i] > 0:
            print(vs.index(svs[i]), end=" ")
            vs[vs.index(svs[i])] = -1
            print()
    for i in range(36):
        if co.count(i) == 0:
            print(i, end=" ")
            print()
    for i in range(len(co)):
        if ((11 > co[i] > 0 or 29 > co[i] > 19) and co[i] % 2 == 0) or ((18 > co[i] > 10 or 36 > co[i] > 28) and co[i] % 2 != 0):
            black += 1
        elif co[i] != 0:
            red += 1
            print(red, black)
            a = int(input())