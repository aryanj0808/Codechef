# cook your dish here
for i in range(int(input())):
    N,M,K=map(int,input().split())
    if(M>=N+K):
        print("YES")
    else:
        print("NO")
