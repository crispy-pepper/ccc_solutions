a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"*3

k = int(input())
c = input()

for i,l in enumerate(c):
    p = a.index(l)
    s = 3*(i+1) + k
    p -= s
    print(a[p],end='')