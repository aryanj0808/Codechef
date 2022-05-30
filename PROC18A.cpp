#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    long long max=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<=n-k;i++){
	        int s=0;
	        for(int j=i;j<i+k;j++){
	            s=s+arr[j];
	            
	        }
	        if(s>max){
	                max=s;
	            }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
