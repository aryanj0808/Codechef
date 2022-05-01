# cook your dish here
def multi(n):
    m1=1 
    for x in n:
        m1=m1*x 
    return m1
def sums(n):
    return (sum(n))

t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int, input().split()))
    a=0
    for i in range(n):
        for j in range(i,n):
            if(sums(l[i:j+1]) == multi(l[i:j+1])):
                a=a+1 
    print(a)