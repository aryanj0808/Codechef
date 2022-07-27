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
	    
	    int arr[n+1]={0};
	    for(int i=0;i<n;i++){
	        int m;
	        cin>>m;
	        arr[m]++;
	        
	    }
	    for(int i=0;i<2;i++)
	    {
	        for(int j=0;j<n-i;j++){
	            if(arr[j]>arr[j+1]){
	                swap(arr[j],arr[j+1]);
	            }
	        }
	    }
	    int count;
	    arr[n]%2?count=arr[n]/2+1:count=arr[n]/2;
	    
	    cout<<max(arr[n-1],count)<<endl;
	}
	return 0;
}