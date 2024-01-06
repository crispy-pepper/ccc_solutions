r = int(input())
c = int(input())
d = int(input())
sum = 0
canvas = [[False for x in range(c)] for y in range(r)]
dirs = {'R':{}, 'C':{}}

for x in range(d):
    k = input().split()
    if int(k[1])-1 not in dirs[k[0]]:
        dirs[k[0]][int(k[1])-1] = 0
    dirs[k[0]][int(k[1])-1] += 1

for row in dirs['R'].items():
    if row[1]%2:
        for x in range(c):
            canvas[row[0]][x] = not canvas[row[0]][x]

for col in dirs['C'].items():
    if col[1]%2:
        for x in range(r):
            canvas[x][col[0]] = not canvas[x][col[0]]

for x in canvas:
    for y in x:
        sum += (y)
print(sum)