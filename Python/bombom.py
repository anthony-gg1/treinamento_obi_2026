tabela_valores = {
    'A': 10,
    'J': 11,
    'Q': 12,
    'K': 13
}

ptsLu = 0
ptsEdu = 0

primE = input()
figuradm, ndm = primE

for i in range(3):
    entrada_lu = input()
    figura, naipe = entrada_lu

    val_carta = tabela_valores[figura]

    if(naipe == ndm):
        val_carta += 4
    
    ptsLu += val_carta

for i in range(3):
    entrada_edu = input()
    figura, naipe = entrada_edu

    val_carta = tabela_valores[figura]

    if(naipe == ndm):
        val_carta += 4
    ptsEdu += val_carta

if ptsEdu > ptsLu:
    print("Edu")
elif ptsEdu == ptsLu:
    print("empate")
else:
    print("Luana")