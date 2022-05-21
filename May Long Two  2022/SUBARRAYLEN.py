# cook your dish here
# cook your dish here
for _ in range(int(input())):
    N=int(input())
    A=list(map(int,input().split()))[:N]
    count=0
    for i in range(0,N):
        for j in range(i,N):
            # print(A[i:j+1])
            # print(j+1-i)
            if j+1-i in A[i:j+1]:
                count+=1
        
    print(count)
            