# cook your dish here
for i in range(int(input())):
    n,m,k=map(int,input().split())
    if(n/m<=k):
        print("YES")
    else:
        print("NO")
