n = int(input())
alturas = list(map(int, input().split()))
maior = 0
contador = 0

for i in range(n - 1, -1, -1):
    if(alturas[i] <= maior):
        contador += 1
    else:
        maior = alturas[i]
print(contador)