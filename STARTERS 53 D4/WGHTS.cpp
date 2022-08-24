#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w==x or w==y or w==z or w==x+y+z or w==x+y or w==y+z or w==x+z){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
