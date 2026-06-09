n, m = list(map(int, input().split()))
contS = 1
contN = 0

for _ in range(n):
    if(n <= m):
        contS += 1
        n += 4
    else:
        contN += 1
        n += 4

if(contN == 1):
    print("N")
else:
    print("S")