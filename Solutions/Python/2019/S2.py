def is_prime(n):
    for k in range(2, round(n**1/2) + 1):
        if n%k == 0:
            return False
    return True
def prime_av(n):
    for x in range(2,n*2):
        if is_prime(x):
            for y in range(2,n*2):
                if is_prime(y) and (y+x)/2 == n:
                    return x,y

for x in range(int(input())):
    n = int(input())
    print(*prime_av(n))
