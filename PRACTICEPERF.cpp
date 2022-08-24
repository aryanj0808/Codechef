#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int count=0;
	for(int i=0;i<4;i++){
	    int temp;
	    cin>>temp;
	    if(temp>=10){
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
