# cook your dish here
for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    k=list(set(l))
    c=0
    for j in k:
        if j!=0:
            c+=1
    print (c)