# cook your dish here
for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().strip().split()))[:n]
    c1=0
    c2=0
    for i in range(0,n):
        if(a[i]==1):
            c1+=1
        else:
            c2+=1
   
    if(abs(c1-c2)==0):
        print("YES")
    elif(abs(c1-c2)==1):
        print("YES")
    elif(abs(c1-c2)==2):
        if(c1%2==0 & c2%2==0):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")