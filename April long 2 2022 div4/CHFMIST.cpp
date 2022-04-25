#include <bits/stdc++.h>
using namespace std;
#define l1 long long


int main() {	// your code goes here
 l1 t;
 cin>>t;
 while(t--){
    l1 n;
    cin>>n;
    vector<l1>v(n);
    l1 sum=0;
    for(l1 i=0;i<n;i++){
        l1 y;
        cin>>y;
        v[i]=y;
        sum+=y;
    }
    long double x=(sum*2.0)/n;
    l1 op=0;
    sort(v.begin(),v.end());
    for(l1 i=0;i<n;i++){
        if(x>=v[i]){
            op+=count(v.begin()+i+1,v.end(),x-v[i]);
        }
    }
    cout<<op<<endl;
}

}
