n = int(input())
array = []
for _ in range(n):
    ticket = input()
    if ticket.startswith('a') and ticket.endswith('55661'):
        array.append(ticket)
if len(array) == 0:
    print(-1)
else:
    print(' '.join(array))