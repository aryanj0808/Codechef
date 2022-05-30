#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int ar[6];
        for(int i=0;i<6;i++){
            cin>>ar[i];
        }
        if((ar[0]==ar[2] || ar[0]==ar[3]) && (ar[1]==ar[2] || ar[1]==ar[3])){
            cout<<"1"<<endl;
        }
        else if((ar[0]==ar[4] || ar[0]==ar[5]) && (ar[1]==ar[4] || ar[1]==ar[5])){
            cout<<"2"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
	// your code goes here
	return 0;
}
