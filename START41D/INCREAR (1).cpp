

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        cout<<0<<endl;
	        
	    }
	    else if(x<y){
	        cout<<y-x<<endl;
	        
	   }
	   else{
	       if((x%2==0 and y%2==0) || (x%2==1)and(y%2==1)){
	           cout<<(x-y)/2<<endl;
	           
	           
	       }
	       else{
	           cout<<((x-y+1)/2)+1<<endl;
	       }
	   }
	}
}
