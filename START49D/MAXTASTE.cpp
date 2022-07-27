#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int f,s;
	    f=a>b?a:b;
	    s=c>d?c:d;
	    cout<<f+s<<endl;
	}
	return 0;
}
