# cook your dish here
for i in range(int(input())):
    count=0
    n=input()
    k=input()
    n=n.split()
    k=k.split()
    for j in k:
        if int(j)>int(n[1]):
            count+=1
    print(count)
