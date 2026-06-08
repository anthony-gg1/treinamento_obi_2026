n = int(input())
marcado = int(input())
contV = 1
for _ in range(n - 1):
    atual = int(input())
    if(atual != marcado):
        contV += 1
        marcado = atual 
print(contV)