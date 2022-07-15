#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,a,b,c;
	    cin>>m>>a>>b>>c;
	    if(a+b+c<=m){
	        cout<<"0"<<endl;
	    }
	    else if(a+c<=m or b+c<=m){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}
