#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    map<char , int> m;
	    for(int i=0;i<s.length();i++){
	        m[s[i]]++;
	    }
	    int ans=0;
	    for(auto p:m){
        // cout<<p.first<<" "<<p.second<<endl;
            ans=ans+(p.second/2+p.second%2);
        }
        cout<<ans<<endl;
	    
	}
	return 0;
}
