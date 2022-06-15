#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if((n%5!=0 and k%5!=0)or(n%5==0 and k%5==0)){
	        cout<<((n/5)+1)-((k/5)+1)<<endl;
	    }
	    else if(n%5==0 and k%5!=0){
	         cout<<((n/5)+1)-((k/5)+1)-1<<endl;
	    }
	    else{
	        cout<<((n/5)+1)-((k/5)+1)+1<<endl;
	    }
	}
	return 0;
}
