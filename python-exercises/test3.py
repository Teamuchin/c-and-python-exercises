from calendar import c

n = 386
a = []
for i in range(0,100):
    for j in range(0,100):
        for k in range(0,100):
            a.append((2**i)*(3**j)*(5**k))
a.sort()
print(a.index(262144))
print(a[n-1])