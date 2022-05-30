#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;
    while(t--){
    int c=0;
    
  
    string s;
    cin>>s;
    int last=s.length();
    for(int i=0;i<last;i++){
        if(s[i]!=s[i+1] ){
              c++;
                              }
    }
    
    for(int i=last-1;i<s.length();i++){
      if(s[0]==s[i]){
          c=c/2;
          
      }
      else{
          c=(c+1)/2;
      }
  }
 
  
    cout<<c<<endl;}
    return 0;
}