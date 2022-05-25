#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	   int n;
	   cin>>n;
	   int count=0;
	   string a,b;
	   cin>>a;
	   //cout<<a<<endl;
	   
	   for(int i=0;i<n-1;i++){
	      cin>>b;
	   //   cout<<b<<endl;
	       for(int j=0;j<10;j++){
	           if(a[j]==b[j]){
	               a[j]='0';
	           }
	           else{
	               a[j]='1';
	           }
	       }
	   }
	      for(int k=0;k<10;k++){
	          if(a[k]=='1'){
	              count++;
	          }
	      }
	    
	   cout<<count<<endl;
	}
	
    return 0;

}
