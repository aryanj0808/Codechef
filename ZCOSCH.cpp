#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n>50 && n<101){
	    cout<<"50"<<endl;
	}
	else if(n<51){
	    cout<<"100"<<endl;
	}
	else{
	    cout<<"0"<<endl;
	}
	return 0;
}
