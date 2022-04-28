# cook your dish here
for i in range(int(input())):
    a,b,a1,b1,a2,b2=list(map(int,input().split()))
    if a in (a1,b1) and b in (a1,b1):
        print(1)
    elif a in (a2,b2) and b in (a2,b2):
        print(2)
    else:
        print(0)

