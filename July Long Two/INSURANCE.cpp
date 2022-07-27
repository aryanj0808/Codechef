#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<y<<endl;
	    }
	}
	return 0;
}
