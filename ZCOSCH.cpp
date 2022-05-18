#include <iostream>
using namespace std;

int main() {
    int r;
	cin>>r;
	if(r>100){
	    printf("0");
	}
	else if(r>50){
	    printf("50");
	}
	else{
	    printf("100");
	}
	return 0;
}
