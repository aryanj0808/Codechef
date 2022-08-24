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
	    int count=0,count1=0;
	 long long ans=0, ans1=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==0){count++;}
	        if(arr[i]==1){count1++;}
	        if(i>0){
	            if(arr[n-1]==arr[0]){
	                
	                ans++;
	                
	            }
	            if(arr[i]==arr[i-1]){
	               // cout<<i<<"--"<<i-1<<" || ";
	                ans++;
	            }
	        }
	        
	    }
	   // cout<<ans;
	        
	   ans1=ans-abs(count-count1);
	   if(ans1%4==0){
	       cout<<"Bob"<<endl;
	   }
	   else{
	       cout<<"Alice"<<endl;
	   }
	       
	}
	return 0;
}
