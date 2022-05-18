# cook your dish here
for _ in range(int(input())):
    N,M=map(int,input().split())
    a=list(map(int,input().split()))
    mx=max(a)
    print(max([x+mx + (x-mx)%M for x in a]))