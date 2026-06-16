g1, g2, g3, g4 = list(map(int, input().split()))
mesas = g4
mesas += g3
g1 = g1 - g3
mesas += g2 // 2
g2 = g2 % 2
if(g2 == 1):
    mesas += 1
    g1 -= 2
if(g1 > 0):
    mesas += (g1 // 4)
    g1 = g1 % 4
if(g1 > 0):
    mesas += 1
print(mesas)