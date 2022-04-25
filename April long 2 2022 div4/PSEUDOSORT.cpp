#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,x,y,i,c=0;
	    cin>>n;
	    int array[n];
	    for(i=0;i<n;i++){
	        cin>>array[i];
	  
	        if(array[i-1]>array[i] && i>=1)
	        {
	            swap(array[i-1],array[i]);
	            if(array[i-2]>array[i-1] && i>=2){
	            c+=2;
	        }
	       else if(array[i-2]<array[i-1] && i>=2){
	           c+=1;
	       }
	       else if(i==1){
	           c+=1;
	       }
	        else{
	            c+=1;
	        }
	    }
	    }
	    if(c>1){
	    cout<<"NO"<<endl;
	}
	else{
	    cout<<"YES"<<endl;
	}
	}
		return 0;
}
