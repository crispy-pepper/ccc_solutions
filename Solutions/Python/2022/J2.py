n = int(input())

c = 0

for x in range(n):
    t = int(input()) * 5
    f = int(input())*3

    c += (t-f > 40)

if c == n:
    print(f'{c}+')
else:
    print(c)

