b = int(input())
n = int(input())
s = 0

while True:
    s += 1
    if b - n > b:break
    n, b = b - n, n
print(s)

