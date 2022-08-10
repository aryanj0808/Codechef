#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--){
	    
	    long long int n;
	    cin >> n;
	    int num=__builtin_popcountll(n)-1;
	    cout <<  num  << endl;
	}
	return 0;
}