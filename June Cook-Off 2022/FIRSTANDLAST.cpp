#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ar[n];
	    long long int max=0;
	    for(int i=1;i<=n;i++){
	        cin>>ar[i];
	    }
	    max=ar[1]+ar[n];
	    for(int i=1;i<n;i++){
	        if(ar[i]+ar[i+1]>max){
	            max=ar[i]+ar[i+1];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
