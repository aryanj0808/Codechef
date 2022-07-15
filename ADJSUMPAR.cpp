#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	        if(v[i]==0){
	            ans++;
	        }
	    }
	    
	    
	    
	    cout<<(((n-ans)%2==0)? "YES" :"NO")<<endl;
	}
	return 0;
}
