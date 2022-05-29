#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int ans=0;
	    for (int i=0;i<N/2;i++){
	        int a;
	        a=N-2*i;
	        ans=ans+(a*a);
	    }
	    if(N%2==0){
	        cout<<ans<<endl;
	    }
	    else{
	        cout<<ans+1<<endl;
	    }
	    
	}
	return 0;
}
