#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s,a=" ";
	    cin>>n>>s;
	    for(int i=0;i<n-1;i++){
	        if(i%2==0){
	            if(s[i]=='0'){
	                if(s[i+1]=='0') a+='A';
	                else a+='T';
	            }
	            else{
	                if(s[i+1]=='0') a+='C';
	                else a+='G';
	            }
	       
	        }
	    }
	    cout<<a<<endl;
	}
	return 0;
}
