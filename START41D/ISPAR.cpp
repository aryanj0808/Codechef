#include <iostream>
using namespace std;
bool odd(long long int x){
    return x&1;
}

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    bool flag=false;
	    
	    if(k==1){
	        if(odd(n))cout<<"ODD"<<endl;
	        else cout<<"EVEN"<<endl;
	        
	    }
	    else if(k==2){
	        cout<<"ODD"<<endl;
	        
	        
	    }
	    else{
	        cout<<"EVEN"<<endl;
	    }
	}
	   
	return 0;
}
