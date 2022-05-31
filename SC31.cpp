#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string str;
        cin>>str;
        long long count=0;
        for (int i=1;i<N;i++){
            string s;
            cin>>s;
            for (int j=0;j<10;j++){
                
                if(str[j]==s[j]){
                    str[j]='0';
                }
                else{
                    str[j]='1';
                }
            }
            
        }
        
        for(int i=0;i<10;i++){
                if(str[i]=='1'){
                    count=count+1;
                }
                // cout<<str[i]<<" ";
        }
        cout<<count<<endl;
        
    }
    
    }
	

