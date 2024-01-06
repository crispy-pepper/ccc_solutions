# CCC 2020 Junior 3: Art
#Store max and min of y and y
n = int(input())
max_x = 0
max_y = 0
min_x = 101
min_y = 101
for i in range(n):
    x,y = list(map(int,input().split(','))) 

    if x < min_x: min_x = x
    if x > max_x: max_x = x

    if y > max_y: max_y = y
    if y < min_y: min_y = y


print(min_x-1,min_y-1,sep=',')
print(max_x+1,max_y+1,sep=',')
