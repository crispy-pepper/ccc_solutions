a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())

n = (int(s/(a+b))*(a-b))+int(s-(s/(a+b))*(a+b))
by = (int(s/(c+d)) * (c-d))  +  (s - int(s/ (c+d)) * (c+d))
    
    

if (by > n):
    print("Byron")
elif (by < n):
    print("Nikky")
else:
    print("Tied")