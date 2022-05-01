# cook your dish here
t=int(input())
for i in range(t):
    n,p=map(int,input().split(" "))
    a=0
    for j in range(n):
        w,h,p1=map(int,input().split(" "))
        if(p>=p1):
            if(w*h>a):
                a=w*h
        
            
    if(a>0):
        print(a)
    else:
        print("no tablet")