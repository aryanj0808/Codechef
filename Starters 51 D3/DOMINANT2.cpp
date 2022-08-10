#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int, int>mp;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    int max=0;
	    for(auto p:mp)
	    {
	        if(p.second>max){
	            max=p.second;
	        }
	        
	    }
	   // cout<<max<<" ";
	    int count=0;
	    for(auto k:mp)
	    {
	       // cout<<k.second<<" ";
	        if(max==k.second){
	            count++;
	        }
	        
	    }
	    
	   // cout<<count<<endl;
	    if(count==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
