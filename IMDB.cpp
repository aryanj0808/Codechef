#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int max=0;
        for(int i=0;i<n;i++){
            int s,r;
            cin>>s>>r;
            if(s<=x && r>max){
                max=r;
            }
        }
        cout<<max<<endl;
    }
	// your code goes here
	return 0;
}
