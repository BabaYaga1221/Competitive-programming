num=int(input("Enter numbers :  \n"))
aar=[0]
j=1
for i in range(num):
    aar.append(j)
    j=j+2
p=0
aar.reverse()
for i in range(num):
    print(aar[p])
    p=p+1