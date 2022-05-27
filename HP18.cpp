#include <iostream>
#include<bits/stdc++.h>

#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b,a;
        cin>>n>>b>>a;
        int p;
        int comman=0;
        int bob=0;
        int alice=0;
        
        for (int i=0;i<n;i++){
            cin>>p;
            if(p%a==0 and p%b==0){ 
                comman++;
            }
            else if(p%b==0){
                bob++;
            } 
            else if(p%a==0) {
                alice++;
                
            } 
        }
        
        if(comman>0){
            bob++;
        }
        if(alice>=bob){
            cout<<"ALICE"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
        
    }
    
	// your code goes here
	return 0;
}
