#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    string str="NO";
	    int temp=min(min(a,b), min(b,c));
	   // cout<<temp<<" ";
	    if(a==b and a==temp){
	        str="YES";
	    }
	    else if(a==c and a==temp){
	        str="YES";
	        
	    }
	    else if(b==c and b==temp){
	        
	        str="YES";
	    }
	    cout<<str<<endl;
	}
	return 0;
}
