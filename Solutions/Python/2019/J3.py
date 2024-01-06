for x in range(int(input())):
    i = input()
    last = i[0]
    l = []
    c = 0
    for y in i[1:]:
        if last != y:
            l.append(c)
            l.append(y)
            c = 0
            print('next')
        c += 1
        last = y

    #l.append(c)
    print(*l)
