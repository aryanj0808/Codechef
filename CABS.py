# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    if(x==y):
        print("Any")
    elif(x>y):
        print("Second")
    else:
        print("First")