# cook your dish here
dict={8:7,0:6,6:6,9:6,2:5,3:5,5:5,4:4,7:3,1:2}
for i in range(int(input())):
    a,b=map(int,input().split())
    z=a+b
    x = [int(a) for a in str(z)]
    count=0
   
    for i in x:
        count+=dict[i]
    print(count)
   