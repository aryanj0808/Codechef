# cook your dish here
for _ in range(int(input())):
    n,k,v=map(int,input().split())
    A=list(map(int,input().split()))[:n]
    ans = sum(A)
    if v*(n+k)-ans<=0:
        print("-1")
    elif (v*(n+k)-ans)%k==0:
        print((v*(n+k)-ans)//k)
    else:
        print("-1")
