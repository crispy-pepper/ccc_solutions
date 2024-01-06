#This does not catch improper inputs so it will crash if so


d = ""
while True:
    x = int(input())

    if x == 99999: break

    a = int(x/1000) - int(x/10000)*10 + int(x/10000)

    if a == 0: pass
    elif (a % 2): d = "left"
    else: d = "right"

    print(d, x%1000)

