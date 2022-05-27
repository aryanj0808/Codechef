#include <iostream>
#include<bits/stdc++.h>
#define ll int
#define endl "\n"
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    unordered_map<int,int> v;
	    set<int>disqualified;
	    for(int i=1;i<=n;i++){
	        ll s;
	        cin>>s;
	        if(s==i){
	            disqualified.insert(i);
	        }
	        v[s]++;
	    }
	    int ans=0;
	    for(auto p:v){
	        if(p.second>=k and disqualified.find(p.first)==disqualified.end()){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	        
	 }
	return 0;
}
