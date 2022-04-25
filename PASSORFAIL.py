# cook your dish here
for i in range(int(input())):
    N,X,P=map(int,input().split())
    if(P<=(X*3)-(N-X)):
        print("PASS")
    else:
        print("FAIL")
    