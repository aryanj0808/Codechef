# cook your dish here
for i in range(int(input())):
    x,y,z=map(int,input().split())
    z=z-y
    z=z//x
    print(z)
    