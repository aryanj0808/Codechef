#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<size_t>arr(n);
	    size_t ans=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        ans+=arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]- ans/(n+1)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
