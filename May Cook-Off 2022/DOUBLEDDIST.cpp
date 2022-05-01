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
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool f=true;
	    sort(arr,arr+n);
	    for(int i=1;i<n-1;i++){
	        int d1 = arr[i]-arr[i-1];
	        int d2 =arr[i+1]-arr[i];
	        if(2*d1!=d2 && d1!=2*d2){
	            f=false;
	            break;
	        }
	    }
	    if(f) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
