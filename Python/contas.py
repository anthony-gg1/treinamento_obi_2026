d = int(input())
a = int(input())
p = int(input())
f = int(input())
contP = 0

contas = [a, p, f]
contas.sort()

for valor in contas:
    if(d  >= valor):
        contP += 1
        d -= valor
    else:
        break

print(contP)