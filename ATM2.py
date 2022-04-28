# cook your dish here
for i in range(int(input())):
    n,k=map(int,input().split())
    ar=list(map(int,input().split()))
    s=""
    for i in range(len(ar)):
        if k>=ar[i]:
            k=k-ar[i]
            s=s+"1"
        else:
            s=s+"0"
    print(s)
    