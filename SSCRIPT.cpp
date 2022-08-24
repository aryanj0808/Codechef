#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
        if(s[i]=='*'){
            c++;
        }
        if(s[i]!='*'){
            c=0;
        }
        if(c==k){
            break;
        }
       
        }
        if(c==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
