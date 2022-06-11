#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,count=0;
	    cin>>a>>b;
	    if(a==b){
	        cout<<a<<endl;
	        
	    }
	    else if(a==0 || b==0){
	        cout<<"-1"<<endl;
	    }
	    else if(a>b){
	       
	       while(b*2<a){
	           b*=2;
	           count++;
	        }
	       if(a==b){
	           cout<<count+a<<endl;
	           
	        }
	       else{
	           cout<<count+a+1<<endl;
	           
	        }
	       
	   }
	   else{
	       while(a*2<b){
	           a*=2;
	           
	           count++;
	       }
	       if(a==b){
	           cout<<count+b<<endl;
	           
	       }
	       else{
	           cout<<count+b+1<<endl;
	           
	       }
	   }
	  
	}
	return 0;
}
