n, m = list(map(int, input().split()))
ttl = 0
for _ in range(n):
    p, g, c = list(map(int, input().split()))
    ttl+=(p * 4) + (g * 9) + (c * 4)
print(m - ttl)