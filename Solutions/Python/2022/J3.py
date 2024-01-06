i = input()

string = ''
n = ''
thing = ''
flag = False

for x in i+' ':
    if flag:
        if x.isnumeric():
            n += x
        else:
            if thing == '-':
                print(' loosen',n)
            else:
                print(' tighten',n)

            n = ''
            thing = ''
            flag = False
            string = x
    elif x in ('-','+'):
        print(string,end='')
        flag = True
        thing = x
    else:
        string += x
