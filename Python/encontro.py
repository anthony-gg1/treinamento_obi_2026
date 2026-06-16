a1 = int(input())
b1 = int(input())
a2 = int(input())
b2 = int(input())
a3 = int(input())
b3 = int(input())
if((min(b1, b2, b3) - max(a1, a2, a3)) + 1 < 0):
    print(0)
else:
    print((min(b1, b2, b3) - max(a1, a2, a3)) + 1)