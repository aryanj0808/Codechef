#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<n/2;i++)
	        count+= (s[i] != s[n-i-1]);
	        
	        cout << (count < 2 ? count : count / 2 + count%2) <<endl;
	    
	}
	return 0;
}
