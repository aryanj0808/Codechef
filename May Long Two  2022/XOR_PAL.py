# cook your dish here

for _ in range(int(input())):
    N=int(input())
    A = input()[:N]
    # print(A)
    B=A[::-1]
    # print(B)
    count=0
    for i in range(N//2):
        if A[i]!=B[i]:
            count+=1
            
    # print(count)
    ans=0
    if(count%2==0):
        
        ans=count//2
        
    else:
        ans=count//2+1
        
    print(ans)
    