import math
numofcircle = int(input(""))
circlelist = {}
circlex={}
circley={}
circlerad={}
finx = {}
finy = {}
circlegroups = {}
tempx = {}
tempy = {}
singlecheck = []
copycheck = 0
sum = 0

for i in range(0,numofcircle):
    circlelist.update({i : input("").split(" ")})
    singlecheck.append(i)
#naming circles while input

def intconversion(lst):
    for i in lst:
        lst.update({i : int(lst[i])})
#converting dict values to int

def intconversion2(lst2):
    for i in range(0,len(lst2)):
        lst2[i] = int(lst2[i])
#converting list values to int

for i in circlelist:
    circlex.update({i : circlelist[i][0]})
    circley.update({i : circlelist[i][1]})
    circlerad.update({i : circlelist[i][2]})
#seperating x,y and radius values of circles

intconversion(circlex)
intconversion(circley)
intconversion(circlerad)


for i in circlelist:
    if i in singlecheck:
        circlegroups.update({i:list([i])})
    for j in circlegroups:
        for k in range(0,len(singlecheck)):
            if singlecheck[k]!="f":
                for a in circlegroups[j]:
                    if singlecheck[k] ==a:
                        copycheck+=1
                if copycheck==0:
                    for b in circlegroups[j]:
                        if singlecheck[k]!="f":
                            if b!=singlecheck[k]:
                                if (circlerad[b]+ circlerad[singlecheck[k]]) >= math.sqrt((abs((circlex[b]-circlex[singlecheck[k]]))**2)+(abs((circley[b]-circley[singlecheck[k]]))**2)):
                                    circlegroups.update({i: circlegroups[i]+[(singlecheck[k])]})
                                    singlecheck[k] = "f"
                copycheck = 0
#grouping intersecting and nested circles(singular circles are still considered as group)
#!WORKS FOR ALL POSSIBLE INTERSECTIONS!

for i in circlegroups:
    tempx.update({i :[]})
    for x in circlegroups[i]: 
        a = list(tempx[i])
        tempx.update({i : a+str(((circlex[x]+circlerad[x]))).split()})
        a = list(tempx[i])
        tempx.update({i : a+str(((circlex[x]-circlerad[x]))).split()})
    finx.update({i:tempx[i]})
#finding all x values of circles in the groups
    
for i in circlegroups:
    tempy.update({i :[]})
    for y in circlegroups[i]:        
        a = list(tempy[i])
        tempy.update({i : a+str(((circley[y]+circlerad[y]))).split()})
        a = list(tempy[i])
        tempy.update({i : a+str(((circley[y]-circlerad[y]))).split()})
    finy.update({i:tempy[i]})
#finding all x values of circles in the groups
    
for i in finx:
    intconversion2(finx[i])

for i in finy:
    intconversion2(finy[i])

for i in finx:
    sum+= ((max(finx[i])-min(finx[i])))*(max(finy[i])-min(finy[i]))
#finding are of circles

for i in circlelist:
    print("( " + str(circlelist[i][0])+ " " + str(circlelist[i][1])+ " ) rad: "+str(circlelist[i][2]))
print("Total rect area: "+str(sum))
#print