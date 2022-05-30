#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        string s;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]<=k){
                k=k-ar[i];
                s=s+'1';
            }
            else{
                s=s+'0';
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
