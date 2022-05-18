# cook your dish here
for _ in range(int(input())):
    N=int(input())
    A = [item for item in input().split()][:N]
    x=0
    y=0
    for i in range(len(A)):
        if A[i]=="START38":
            x+=1
        elif A[i]=="LTIME108":
            y+=1
    print(x,y)