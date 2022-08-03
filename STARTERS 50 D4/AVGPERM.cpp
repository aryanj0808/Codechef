#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    
	    if(num!=3){
    	    cout<<num<<" "<<num-2<<" ";
    	    for(int i=1;i<num-3;i++){
    	        cout<<i<<" ";
    	    }
    	    cout<<num-3<<" "<<num-1<<endl;
	    }
	    else{
	        cout<<1<<" "<<2<<" "<<3<<endl;
	    }
	}
	return 0;
}
