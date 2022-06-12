#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x,n,z;
	    cin>>x>>n;
	    z=(x-1)*(2*n-x);
	    cout<<z<<endl;
	}
	return 0;
}
