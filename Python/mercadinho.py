n = int(input())
idades = list(map(int, input().split()))
contV = 0
contM = 0

for i in range(n):
    if(idades[i] >= 60):
        contM = max(contM, i - contV)
        contV += 1
print(contM)