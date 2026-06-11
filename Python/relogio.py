h = int(input())
m = int(input())
s = int(input())
t = int(input())

st = (h * 3600) + (m * 60) + s
nst = st + t
nst = nst % 86400

nh = nst // 3600
restoS = nst % 3600

nm = restoS // 60
ns = restoS % 60

print(nh)
print(nm)
print(ns)