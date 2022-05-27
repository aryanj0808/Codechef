
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    bool Flag=true;
	    int N;
	    cin>>N;
	    vector<int> v(N);
	    for(int i=0;i<N;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    for(int i=1;i<N;i++){
	        if(v[i]-v[i-1]>1){
	            Flag=false;
	            break;
	        }
	    }
	    if(Flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
