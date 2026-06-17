d = int(input())
a = int(input())
n = int(input())

if(n >= 15):
    print((d + 14 * a) * (32 - n))
else:
    print((d + (n * a)) * (32 - n))

# Fazer sem if e else depois