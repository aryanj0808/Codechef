#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int l,r;
	    cin>>l>>r;
	    int count=0;
	    if(l%2==0){
	        if(r>=l+3){
	            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
	        }
	        else{
	            cout<<"-1"<<endl;
	        }
	    }
	    else{
	        if(r>=l+4){
	            l=l+1;
	            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
	        }
	        else{
	            cout<<"-1"<<endl;
	        }
	    }
	   
	   
	}
	return 0;
}
