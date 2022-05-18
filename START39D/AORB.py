# cook your dish here
for _ in range(int(input())):
    x,y=map(int,input().split())
    a=500-x*2
    b=1000-(x+y)*4
    c=500-(x+y)*2
    d=1000-y*4
    if a+b > c+d:
        print(a+b)
    else:
        print(c+d)