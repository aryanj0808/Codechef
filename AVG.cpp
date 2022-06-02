#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    long long sum=0;
	    int ar[n];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        sum=sum+ar[i];
	    }
	    int nr=((v*(n+k))-sum);
	    int ans=nr/k;
	    
	    if(ans>0 and nr%k==0){
	        cout<<ans<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	
	return 0;
}
