# cook your dish here
for _ in range(int(input())):
    N=int(input())
    A=list(map(int,input().split()))[:N]
    count=1
    
    for i in range(len(A)-1):
        if A[i]!=A[i+1]:
            count+=1
        else:
            pass
    print(count)
            
