def get_ver(hor, n):
    ver = [[hor[y][x] for y in range(n)] for x in range(n)]
    return ver

def rotate(ver):
    n_hor = []
    for x in ver:
        n_hor.append(list(reversed(x)))

    return n_hor

def check(hor,ver):
    for x in hor:
        if x != sorted(x):
            return False

    for y in ver:
        if y != sorted(y):
            return False

    return True

n = int(input())
h = [list(map(int,input().split())) for x in range(n)]
v = get_ver(h,n)

for x in '   ':
    if check(h,v):break
    h = rotate(v)
    v = get_ver(h,n)

for x in h:
    print(*x)

