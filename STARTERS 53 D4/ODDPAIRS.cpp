#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    if(n%2==0){
	        cout<<(n*n)/2<<endl;
	    }
	    else{
	        cout<<(n/2)*((n/2)+1)*2<<endl;
	    }
	}
	return 0;
}
