# cook your dish here
for t in range(int(input())):
    n,k=map(int,input().split())
    ar=list(map(int,input().split()))
    z=0
    for i in range(len(ar)):
        d=z+ar[i]
        if d<k:
            print("NO ",i+1)
            break
         
        else:
            z=d-k
    else:
        print("YES")