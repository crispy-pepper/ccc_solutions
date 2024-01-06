x, y = input().split()
x1, y1 = input().split()
x, y, x1, y1 = int(x), int(y), int(x1), int(y1)
g = int(input())
short = abs(x - x1) + abs(y - y1)
if short > g or short%2 != g%2:
    print('N')
else:
    print('Y')