#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map <int , int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int ans = n;
    int count=0;
    for(auto value : m){
        ans=min(ans,n-value.second);
        count++;
    }
    if(count>=2){
        ans=min(ans,n-2);
    
    }
    
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    solve();
	    
	}
	return 0;
}
