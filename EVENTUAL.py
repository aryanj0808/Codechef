# cook your dish here
from collections import Counter
for _ in range(int(input())):
    N=int(input())
  
    if(N%2!=0):
        s=input()
        print("NO")
    else:
        flag=True
        c=Counter(list(input()))
        for i in c:
            if c[i] % 2 :
                print("NO")
                flag=False
                break
        if flag:
            print("YES")