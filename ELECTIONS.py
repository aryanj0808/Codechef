# cook your dish here
for _ in range(int(input())):
    x,y,z=map(int,input().split())
    if(x>50):
        print("A")
    elif(y>50):
        print("B")
    elif(z>50):
        print("C")
    else:
        print("NOTA")
