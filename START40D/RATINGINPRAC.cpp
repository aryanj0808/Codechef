#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	        
	    }
	    bool flag=true;
	    for(int j=0;j<n-1;j++){
	       // cout<<a[j];
	        if(a[j]>a[j+1]){
	            flag= false ;
	            break;
	        }
	    }
	    if(flag==true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}