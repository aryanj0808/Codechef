#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int p,q;
	    p=max(a,b);
	    q=max(c,d);
	    if(p==q){
	        cout<<"TIE"<<endl;
	    }
	    else if(p<q){
	        cout<<"P"<<endl;
	    }
	    else{
	        cout<<"Q"<<endl;
	    }
	   
	}
	return 0;
}
