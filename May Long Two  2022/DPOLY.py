# cook your dish here
for _ in range(int(input())):
    N=int(input())
    A=list(map(int,input().split()))[:N]
    A.reverse()
    # print(A)
    for i in range(len(A)):
        if A[i]==0:
            pass
        else:
            print(N-1-i)
            break