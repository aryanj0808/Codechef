t=int(input())
for i in range (t):
    x, y = [int(x) for x in input().split()] 
    if (y%x==0):
        print("YES")
    else:
        print("NO")

