#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,c;
	cin>>t;
	while(t--){
	    cin>>c;
	    if(c>20){
	        cout<<"HOT"<<endl;
	    }
	    else{
	        cout<<"COLD"<<endl;
	    }
	}
	return 0;
}
