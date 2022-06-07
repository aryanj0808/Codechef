#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x*3<=n){
	        cout<<n/(x*3)<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
