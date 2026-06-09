n, m = list(map(int, input().split()))

if n > m:
    print("N" if n == 1 else "S")
else:
    pi = int(((m - n) / 4) + 1)
    pe = n - pi

    if pe == 1:
        print("N")
    else:
        print("S") 