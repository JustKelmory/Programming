s, l1, r1, l2, r2 = map(int, input().split())
running = True
x1 = l1
x2 = 0
if x1 + r2 < s:
    x2 = r2
    if s > r1 + x2:
        print("-1")
        running = False
    else:
        x1 = s - r2
else:
    if s < l1 + l2:
        print("-1")
        running = False
    else:
        x2 = s - x1
if running:
    print ("x1 =", x1, "\n", "x2 =", x2)