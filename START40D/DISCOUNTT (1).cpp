#include <iostream>
 

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a[n];
	    int sum1=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum1+=a[i];
	    }
	    // cout<<sum1<<endl;
	    
	    
        
        for(int j=0;j<n;j++){
            if(a[j]-y<0){
                a[j]=0;
            }
            else{
                a[j]=a[j]-y;
            
            }
        }
        // cout<<sum2+x<<endl;
        int sum2=0;
        for(int j=0;j<n;j++){
            sum2+=a[j];
        }
        
        if(sum2+x<sum1) cout<<"COUPON"<<endl;
        else cout<<"NO COUPON"<<endl;
        
        
	}
	return 0;
}
