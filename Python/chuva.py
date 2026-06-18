n = int(input())
s = int(input())
valores = list(map(int, input().split()))
contD = 0
for i in range(n):
    if(valores[i] == s):
        contD += 1
    if(valores[i] + valores[i] == s):
        contD += 1
print(contD)

# Esta passando apenas por dois casos de teste, arrumar depois.