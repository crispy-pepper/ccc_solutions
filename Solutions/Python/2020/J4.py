# CCC 2020 Junior 4: Cyclic Shifts
#Manually shift smaller string by one each time and check

answer = "no"
s1, s2 = input(),input()

for i in range(len(s2)):
    if s2 in s1:
        answer = "yes"
        break
    s2 = s2[1:]+s2[0]

print(answer)