#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,y,z;
	    cin>>a>>b;
	    if(a%10==0){
	        z=a/10-1;
	        
	    }
	    else{
	        z=a/10;
	        
	    }
	    if(b%10==0){
	        y=b/10-1;
	    }
	    else{
	        y=b/10;
	    }
	    cout<<abs(z-y)<<endl;
	    
	}
	return 0;
}
