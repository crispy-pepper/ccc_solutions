n, hs, w, a = int(input()), input().split(), input().split(), 0

for x in range(n):
    sides, width = (int(hs[x]),int(hs[x+1])), int(w[x])
    a += min(sides)*width + (max(sides)-min(sides))*width/2
    
print(a)
