
def ok():
    mm = int(input())
    if mm == 0:
        print(0)
        return 1
    h = mm//60 
    m = mm%60
    s = 0
    for hour in [12]+list(range(1,h+1)):
        for min in range(60):
            if int(hour) == h and int(min) > m:
                #print("ok nad")
                print(s)
                return 1

            time = str(hour)+str(min)
            x = len(time)
            
    print(s)

ok()