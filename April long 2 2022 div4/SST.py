# cook your dish here
for i in range(int(input())):
    a,b=map(int,input().split())
    if(a*100//10==b*100//20):
        print("ANY")
    elif(a*100//10>b*100//20):
        print("FIRST")
    else:
        print("SECOND")
