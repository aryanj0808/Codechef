# cook your dish here
for i in range(int(input())):
    x,m,d=map(int,input().split())
    if(x*m<=d+x):
        print(x*m)
    else:
        print(d+x)