#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int num,k;
     cin>>num>>k;
     if(k>ceil(num*1.0/2)){
         cout<<"-1"<<endl;
         
     }
     else{
         vector<char> vec;
         for(int i=0;i<num/2;i++){
             vec.push_back((char)('a'+i%k));
         }
         for(int i=0;i<num/2;i++){
             cout<<vec[i];
         }
         if(num%2){
             cout<<(char)('a'+(num/2)%k);
         }
         for(int i=num/2-1;i>=0;i--){
             cout<<vec[i];
         }
         cout<<endl;
     }
    }
}