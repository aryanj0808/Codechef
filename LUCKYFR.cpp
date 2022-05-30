#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    string s;
	    int count=0;
	    cin>>s;
	    for(int j=0;j<s.length();j++){
	        if(s[j]=='4'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
