#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n%6==0) cout<<(n/6)*x<<endl;
	    
	    else cout<<(n/6 + 1)*x<<endl;
	}
	return 0;
}
