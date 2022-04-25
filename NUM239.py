# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    a=0
    for i in range(x,y+1):
        if(i%10==2) or (i%10==3) or (i%10==9):
            a=a+1
        else:
            pass
    print(a)