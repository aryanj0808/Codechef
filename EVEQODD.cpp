#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void evenodd(){
    int n,counto=0,counte=0;
    cin>>n;
    n=n*2;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        counto += arr[i]%2;
    }
    counte=n-counto;
    if(counto>counte){
        int ans= counto-n/2;
        cout<<ans<<endl;
    }
    else{
        vector<int> T;
        for(int i=0;i<n;i++){
            int temp =arr[i];
            if(temp%2)continue;
            int count =0;
            while(temp%2==0){
                temp/=2;
                count++;
            }
            T.push_back(count);
        }
        sort(T.begin(),T.end());
        int result =0;
        for(int i=0;i<counte-n/2;i++) result +=T[i];
        cout<<result<<endl;
    }
}
signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    evenodd();
	}
	return 0;
}
