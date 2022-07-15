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
	    int max=0,min=10000,maxI,minI;
	    int arr[n];
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	            maxI=i;
	        }
	        if(arr[i]<min){
	            min=arr[i];
	            minI=i;
	        }
	    }
	   // cout<<min<<" "<<minI<<" "<<max<<" "<<maxI<<" "<<n<<endl;
	    if(minI==1 and maxI==n){
	        cout<<"0"<<endl;
	    }
	    else if(minI==1 and maxI!=n){
	        cout<<n-maxI<<endl;
	    }
	    else if(minI!=1 and maxI==n){
	        cout<<minI-1<<endl;
	    }
	    else if(minI<maxI){
	        cout<<(n-maxI)+(minI-1)<<endl;
	    }
	    else if(minI>maxI){
	        cout<<(n-maxI)+(minI-1)-1<<endl;
	    }
	}
	return 0;
}
