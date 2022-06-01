#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a,b;
	    if(n%2==0){
	        a=0;
	        b=1;
	    }
	    else{
	        a=1;
	        b=1;
	    }
	    if(k==a || k==b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
