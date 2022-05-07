# cook your dish here
for _ in range(int(input())):
    
    N,x,y=map(int,input().split())
    # LL,LU,RL,RU
    D=2*N-2
    LL=min(N-x,y-1)
    LU=min(x-1,y-1)
    RU=min(x-1,N-y)
    RL=min(N-x,N-y)
    print(D+LL+LU+RU+RL)
    
    
  