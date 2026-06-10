n = int(input())
p = int(input())
dias = 0
bac = 1
while(bac * p <= n):
    bac *=  p
    dias += 1
print(dias)