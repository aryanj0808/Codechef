#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int temp=n;
        int count =1;
        for(int i=0;i<n;i++){
            if(i%2!=0){
                cout<<count++<<" ";
            }
            else{
                cout<<temp--<<" ";
            }
        }
        cout<<endl;
    }
}