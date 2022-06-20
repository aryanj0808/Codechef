#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    if((p+q)%4==0 or (p+q)%4==1){
	        cout<<"Alice"<<endl;
	    }
	    else if((p+q)%4==2 or (p+q)%4==3){
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
