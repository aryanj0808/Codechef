#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,x;
        cin >> n >> x;
        long long int arr[200002],temp[200002][2];
        for(int i=1;i<=n;++i){
            cin >> arr[i];
        }
        
        for(int i=2;i<=n;++i) {
            temp[i][1]=max(temp[i-1][0]+(arr[i-1]^(arr[i]+x)),temp[i-1][1]+((arr[i-1]+x)^(arr[i]+x)));
            temp[i][0]=max(temp[i-1][0]+(arr[i-1]^arr[i]),temp[i-1][1]+((arr[i-1]+x)^arr[i]));
        }

        if(temp[n][0]<=temp[n][1]){
            cout<<temp[n][1]<<endl;
        }
    
        else{
            cout<<temp[n][0]<<endl;
        }
    

  
    }
    return 0;
}