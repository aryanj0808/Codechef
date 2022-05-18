# cook your dish here
for _ in range(int(input())):
    x,y=map(int,input().split())
    
    if (y-x)%8==0:
        print((y-x)//8)
    else:
        print(((y-x)//8)+1)