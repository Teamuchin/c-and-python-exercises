n = int(input("Enter List Size: "))

def add_element(c):
    z = []
    for p in range(0,c):
        z.append(int(input("Enter Number From List: ")))
    return z

a = add_element(n)

def countfield_subset(y):
    b = {}
    def counter(x,t):
        if tuple([0]) in b:
            k = list(b)
            for i in k:
                if len(i)==t:
                    h = list(i)
                    for j in range(0,len(x)):
                        if  (j in i)==False:
                            b.update({tuple(sorted(h+[j])):b[i]+x[j]})     
            if t != len(x):
                t+=1
                counter(a,t)                 
        else:    
            for i in range(0,len(x)):
                b.update({tuple([i]): x[i]})
            counter(a,t)
        return(list(b.values()))    
    return(counter(a,1).count(y))
u = input("Enter Desired Number: ")
m = countfield_subset(int(u))
print(str(m) + " Sublists' Sum Are " + u)