# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    if(y*30<=x):
        print("YES")
    else:
        print("NO")
