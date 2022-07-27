#include<bits/stdc++.h>
using namespace std;
#define line cout<<"\n";
#define ll int long long
#define pu push_back
#define ff first
#define ss second
int main()
{
       int t;
      cin>>t;
      while(t--)
      {
            int x,y,n,r;
            cin>>x>>y>>n>>r;
            if((r/x)<n){
                cout<<-1<<endl;
            }
            else if((r/y)>=n){
                cout<<0<<" "<<n<<endl;            
            }
            
           else
           {
               int count=(x-y);
               
               int temp=y*n;
               
               int ans=(r-temp)/count;
               
               if((r-temp)%count!=0){
                  ans=ans+1;
               }
              
                   cout<<ans<<" "<<n-ans<<endl;
               
           }
          
      }
}