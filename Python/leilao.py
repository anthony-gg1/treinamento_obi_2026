n = int(input())
nomes = []
valores = []
maiorVal = 0
nomeVencedor = ''

for _ in range(n):
    nome = str(input())
    nomes.append(nome)
    valor = int(input())
    valores.append(valor)
    if(valor > maiorVal):
        maiorVal = valor
        nomeVencedor = nome
    
print(nomeVencedor)
print(maiorVal)
        