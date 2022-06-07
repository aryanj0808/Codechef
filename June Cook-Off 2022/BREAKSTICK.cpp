#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x==1){
	        cout<<"YES"<<endl;
	    }
	    else if(n%2==0){
	        if(x%2==0){
	            cout<<"YES"<<endl;
	            
	        }
	        else{
	            if((n-x)%2!=0){
	                cout<<"YES"<<endl;
	                
	            }
	            else{
	                cout<<"NO"<<endl;
	            }
	        }
	    }
	    else{
	        if(x%2==0){
	            cout<<"NO"<<endl;
	        }
	        else{
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}
