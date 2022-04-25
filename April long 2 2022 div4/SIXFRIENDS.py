# cook your dish here
for i in range(int(input())):
    x,y=map(int,input().split())
    if(x*3<=y*2):
        print(x*3)
    else:
        print(y*2)