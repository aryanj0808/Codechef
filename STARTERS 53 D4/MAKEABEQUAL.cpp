#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long arr1[n],arr2[n];
	    long long sum1=0,sum2=0;
	       for(int i=0;i<n;i++){
	           cin>>arr1[i];
	           
	           sum1+=arr1[i];
	       }
	       for(int i=0;i<n;i++){
	           cin>>arr2[i];
	           
	           sum2+=arr2[i];
	       }
	       long long  diff=0;
	       //cout<<sum1<<" "<<sum2<<endl;
	       long long co;
	       if(sum1==sum2){
    	       for(int i=0;i<n;i++){
    	              co=arr1[i]-arr2[i];
    	              
    	              if(co>0){
    	                  
    	                  diff+=co;
    	                  
    	              }
    	              
    	       }
    	       cout<<diff<<endl;
	       }
	       else{
	           cout<<-1<<endl;
	       }
	           
            
	       
	    
	}
	return 0;
}
