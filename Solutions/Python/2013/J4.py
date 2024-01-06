t = int(input())
l = [int(input()) for x in range(int(input()))]
c = 0
while True:
    if t < min(l):
        break
    t -= min(l)
    l.remove(min(l))
    c += 1
print(c)