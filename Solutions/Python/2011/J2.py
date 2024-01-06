h = int(input())

for t in range(1,int(input())+1):
  a = -6*t**4 + h*t**3 +2*t**2 + t
  if a <= 0:
    print(f"The balloon first touches ground at hour: \n{t}")
    break

if a > 0:print("The balloon does not touch ground in the given time.")