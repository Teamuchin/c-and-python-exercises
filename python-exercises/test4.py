f = open("f4.txt", "r")
a = {}
b = []
for line in f:
    b = list(line.replace("\n",""))
for i in range(0,len(b)):
    if b[i] in a:
        a.update({b[i]:a[b[i]]+1})
    elif (b[i] in a) == 0:
        a[b[i]] = 0
for i in a:
    print(i + " : "+ str(a[i]))



f.close()