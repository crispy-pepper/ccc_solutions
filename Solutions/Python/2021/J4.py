l = list(input())
L, M, xL, xM, LiM, MiL = l.count("L"), l.count("M"), 0, 0, 0, 0

for i in range(L):
  xL += (l[i] != 'L')
  MiL += (l[i] == 'M')
  
for i in range(L,L+M):
  xM += (l[i] != 'M')
  LiM += (l[i] == 'L')

print(xL + xM - min(MiL, LiM))