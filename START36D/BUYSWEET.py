def solution(R,A,B):
    adj = []

    for i in range(len(A)):
        adj.append([A[i],B[i]])

    adj.sort(key = lambda x : x[1]-x[0],reverse=True)

  

    ans = 0
    for i in range(len(adj)):
        if adj[i][0]<=R:
            diff = adj[i][0]-adj[i][1]

            buyTimes = (R-adj[i][0])+1
         
            if buyTimes < diff:
                ans += 1
                R -= adj[i][0]
                R += adj[i][1]
            else:
                ans += buyTimes//diff
                if buyTimes % diff >= 1:
                    ans += 1
                    R = (buyTimes%diff) -1
                    R += adj[i][1]
                else:
                    R = adj[i][1]

    return ans

if __name__ == "__main__":
    for _ in range(int(input())):
        N,R = map(int,input().split(" "))
        A = list(map(int,input().split(" ")))
        B = list(map(int,input().split(" ")))
        print(solution(R,A,B))