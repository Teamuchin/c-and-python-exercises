from operator import delitem, index


a = input("")
i = 0
while i <len(a):
    print(a.find(a[i],i+1))
    while a.find(a[i],i+1) == i+1:
        if a.find(a[i],i+1)!= -1:
            a = a.replace(a[i],"",1)
        print(i)
        print(a.find(a[i],i+1))
        print(a)
    i+=1
print(a)