#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,x,y,i,k,co=0;
        cin>>n;
        if(n%5==1 || n%5==0){
            cout<<(n/5)*2<<endl;
        
        }
        else{
            cout<<(n/5)*2+1<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
