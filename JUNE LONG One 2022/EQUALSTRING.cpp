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
	    string a,b,x=" ";
	    cin>>a>>b;
	    for(int i=0;i<n;i++){
	        if(a[i]!=b[i]){
	            x+=b[i];
	        }
	        
	    }
	   sort(x.begin(),x.end());
	   long long int ans=0;
	   for(int i=0;i<x.size()-1;i++){
	   if(x[i]!=x[i+1]){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	        
	    
	}
	return 0;
}
