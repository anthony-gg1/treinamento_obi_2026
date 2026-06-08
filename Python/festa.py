e = int(input())
s = int(input())
l = int(input())
if abs(e - s) <= abs(e - l):
    print(abs(e - s) + abs(s - l) + abs(l - e))
else:
    print(abs(e - l) + abs(l - s) + abs(s - e))