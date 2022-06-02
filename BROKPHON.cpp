#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n-1;i++){
            if(ar[i]!=ar[i+1]){
                if(i==0){
                    count+=2;
                }
                else if(ar[i]!=ar[i-1]){
                    count++;
                }
                else{
                    count+=2;
                }
            }
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
