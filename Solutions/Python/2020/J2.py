# CCC 2020 Junior 2: Epidemiology
#Brute force through days using while loop

t,n,r,d = int(input()),int(input()),int(input()),0
i,iS = n,n

while i <= t:
    iS *= r
    i += iS
    d += 1

print(d)