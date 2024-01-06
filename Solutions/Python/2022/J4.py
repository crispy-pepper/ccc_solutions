must = []
mustnt = []
c = {}
for x in range(int(input())):
    i = input().split()
    if i[0] not in c:
        c[i[0]] = [[],[]]
    c[i[0]][0].append(i[1])
for x in range(int(input())):
    i = input().split()
    if i[0] not in c:
        c[i[0]] = [[],[]]
    c[i[0]][1].append(i[1])

n = int(input())
vio = 0
groups = []
for ire in range(n):
    group = input().split()
    for i in [0,1,2]:
        p = group[i]
        if p not in c:
            c[p] = [[],[]]
        can = c[p][0]
        cant = c[p][1]



        for x in can:
            if x not in group:
                vio += 1
        for x in cant:
            if x in group:
                vio += 1
        #print(group)

print(vio)