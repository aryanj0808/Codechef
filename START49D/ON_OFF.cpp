#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,r;
	    cin>>s>>r;
	    int count=1;
	    for(int i=0;i<n;i++){
	        if(s[i]!=r[i]){
	            if(count==1) count=0;
	            else count =1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
