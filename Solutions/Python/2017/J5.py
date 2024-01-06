n = int(input())
L = [int(i) for i in input().split()]
d = {}
for x in range(len(L)):
    for y in range(len(L)):
        if x == y:
            continue
        elif L[x]+L[y] not in d:
            d[L[x]+L[y]] = 0
        d[L[x]+L[y]] += 1

print(d)
list(d.keys())[list(d.values()).index(max(d.values()))]
print((max(d.values()))//2)