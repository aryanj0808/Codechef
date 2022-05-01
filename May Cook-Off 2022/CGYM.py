# cook your dish here
for i in range(int(input())):
    x,y,z=map(int,input().split())
    if(z>=x+y):
        print("2")
    elif z>=x:
        
        print("1")
    else:
        print("0")
