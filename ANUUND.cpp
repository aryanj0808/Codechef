#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }int temp;
	    for(int i=0;i<N-1;i++){
	        if(i%2==0){
	           if(A[i]<=A[i+1]) continue;
	           else{
	              temp=A[i];
	              A[i]=A[i+1];
	              A[i+1]=temp;
	           //   cout<<A[i]<<" ";
	           }
	           
	        }
	        else{
	            if(A[i]>=A[i+1]) continue;
	            else{
	                temp=A[i];
	                A[i]=A[i+1];
	                A[i+1]=temp;
	               // cout<<A[i]<<" ";
	            }
	            
	        }
	    }
	    for(int i=0;i<N;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
