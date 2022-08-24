#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            mp[temp]++;
        }
        for(auto p:mp){
            if(p.second%2!=0){
                vec.push_back(p.first);
            }
        }
        for(auto it:vec){
            cout<<it<<" ";
        }
        cout<<endl;
        
    }
	return 0;
}
