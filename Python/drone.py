a = int(input())
b = int(input())
c = int(input())
h = int(input())
l = int(input())

a, b, c = sorted([a, b, c])
h, l = sorted([h, l])

print("S" if a <= h and b <= l else "N")