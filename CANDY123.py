for i in range(int(input())):
    a,b=map(int,input().split())
    i=1
    while a>=0 and b>=0:
        if(i<=a):
            a=a-i
        else:
            print("Bob")
            break
        if(i+1<=b):
            b=b-(i+1)
        else:
            print("Limak")
            break
        i=i+2