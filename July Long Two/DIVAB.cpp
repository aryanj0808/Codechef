#include <iostream>
using namespace std;
int find(int a, int b, int n){
    
    if(a%b==0){
        return -1;
    }
    else{
        if(n%a!=0){
            int count=n/a;
            count++;
            if((count*a)%b==0){
                count++;
            }
            return count*a;
        }
        else if(n%a==0){
            int count=n/a;
            if(n%b==0){
                count++;
            }
            return count*a;
        }
    }
    
    
};
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,n;
	    cin>>a>>b>>n;
	    int ans =find(a,b,n);
	    cout<<ans<<endl;
	}
}
