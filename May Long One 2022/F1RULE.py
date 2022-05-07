# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    if(y<=(x*107/100)):
        print("YES")
    else:
        print("NO")