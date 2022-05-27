#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            }
        int count=0;
        
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n-1;k++){
                if(a[j]^a[k]==b[j]^b[k]){
                    count++;
                }
                

                
            }
            
            }
            
        
        cout<<count-1<<endl;
    }
	// your code goes here
	return 0;
}
