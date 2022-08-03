#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y;
	    if((abs(x-y))%2==0)cout<<(abs(x-y))/2<<endl;
	    else cout<<(abs(x-y))/2+1<<endl;
	    
	}
	return 0;
}
