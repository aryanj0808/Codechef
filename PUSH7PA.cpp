
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,a[i]+m[a[i]]);
        }
        cout<<maxi-1<<endl;
    }
	return 0;
}
