n =int(input())
shift = int(input())
sum = 0
for x in range(shift+1):
    sum += n
    n *= 10
print(sum)