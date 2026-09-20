a = input("")

for i in a:
    if a.count(i) >=2:
        print(i +" " + str(a.count(i)))
        a = a.replace(i,"")
