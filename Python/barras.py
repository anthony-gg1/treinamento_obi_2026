n = int(input())
D = list(map(int, input().split()))
m = max(D)
for i in range(m):
    for j in range(n):
        print(int(m-i <= D[j]), end="")
    print()

# tá feio e mal otimizado, mas resolve o problema