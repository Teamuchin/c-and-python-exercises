import math
numofcircle = int(input(""))
circlelist = {}
circlex={}
circley={}
circlerad={}
finx = {}
finy = {}
finrad = []
circledouble = set({})
tempx = {}
tempy = {}
singlecheck = set({})
sum = 0

for i in range(0,numofcircle):
    circlelist.update({i : input("").split(" ")})
    singlecheck.add(i)


def intconversion(lst):
    for i in lst:
        lst.update({i : int(lst[i])})

def intconversion2(lst2):
    for i in range(0,len(lst2)):
        lst2[i] = int(lst2[i])

for i in circlelist:
    circlex.update({i : circlelist[i][0]})
    circley.update({i : circlelist[i][1]})
    circlerad.update({i : circlelist[i][2]})

intconversion(circlex)
intconversion(circley)
intconversion(circlerad)



for i in circlerad:
    for j in circlerad:
        if i != j:
            if (circlerad[i]+ circlerad[j]) > math.sqrt((abs((circlex[i]-circlex[j]))**2)+(abs((circley[i]-circley[j]))**2)) :
                circledouble.add(tuple(sorted([i,j])))
                if i in singlecheck:
                    singlecheck.discard(i)
                if j in singlecheck:
                    singlecheck.discard(j)
        

for i in circledouble:
    tempx.update({i :[]})
    for x in i: 
        a = list(tempx[i])
        tempx.update({i : a+str(((circlex[x]+circlerad[x]))).split()})
        a = list(tempx[i])
        tempx.update({i : a+str(((circlex[x]-circlerad[x]))).split()})
    finx.update({tuple([i[0],i[1]]):tempx[i]})

    
for i in circledouble:
    tempy.update({i :[]})
    for y in i:        
        a = list(tempy[i])
        tempy.update({i : a+str(((circley[y]+circlerad[y]))).split()})
        a = list(tempy[i])
        tempy.update({i : a+str(((circley[y]-circlerad[y]))).split()})
    finy.update({tuple([i[0],i[1]]):tempy[i]})

    
for i in finx:
    intconversion2(finx[i])

for i in finy:
    intconversion2(finy[i])

for i in circlerad:
    finrad.append(circlerad[i])


for i in finx:
    sum+= ((max(finx[i])-min(finx[i])))*(max(finy[i])-min(finy[i]))



for i in singlecheck:
    sum+=(2*finrad[i])**2

for i in circlelist:
    print("( " + str(circlelist[i][0])+ " " + str(circlelist[i][1])+ " ) rad: "+str(circlelist[i][2]))
print("Total rect area: "+str(sum))