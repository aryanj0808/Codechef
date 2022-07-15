#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int arr[n];
        int flag=0;
        long long int count=0;
        for(int i=0;i<n;i++){
            
            cin>>arr[i];
            
            count+=arr[i];
            
            if(arr[i]==1){
                flag=1;
            }
            
        }
        
        if(flag==1 or count%2!=0){
            cout<<"CHEF"<<endl;
        }
        
        else{
            cout<<"CHEFINA"<<endl;
        }
        
        
        
        
	}
	return 0;
}
