# cook your dish here
t=int(input())
for i in range (t):
    x,y,z=map(int,input().split())
    time=y//x
    if(z<time):
        print("0")
    else:
        p=z-time
        print(abs(p))