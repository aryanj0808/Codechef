#include <bits/stdc++.h>
using namespace std;

#define Jhunjhar_Hova ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){



int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;



    int sub= abs(a-b);

    vector<int> v;

    for(int i=1;i*i<=sub; i++){
        if(sub%i==0){
            if(sub/i ==  i){
                v.push_back(i);
            }else{
                v.push_back(i);
                v.push_back(sub/i);
            }
        }
    }

    cout<<v.size()<<endl;
}

}