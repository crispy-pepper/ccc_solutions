s1 = input().split()
s2 = input().split()
s3 = input().split()
n, s, f = [input().split()]
for x in range(int(n)):
    s = s.replace(s1[0],s1[1],1)
    s.replace("hi","bye")
    print(s)
