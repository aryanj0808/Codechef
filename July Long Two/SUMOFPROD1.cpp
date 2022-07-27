#include<bits/stdc++.h>
#include <iostream>

using namespace std;

signed main() {
	// your code goes her
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    vector<int>vec;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==0){
	            vec.push_back(i);
	        }
	    }
	    long long int count =(n*(n+1))/2;
	    long long int sum=0;
	    if(vec.size()==0){
	        cout<<count<<endl;
	        
	        
	    }
	    else{
	        sum=sum+(vec[0]+1)*(n-vec[0]);
	        for(int i=1;i<vec.size();i++)
	        {
	            sum=sum+(vec[i]-vec[i-1])*(n-vec[i]);
	        }
	        cout<<count-sum<<endl;
	        
	    }
	    
	}
	return 0;
}
