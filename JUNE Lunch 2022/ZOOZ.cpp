#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string str="";
	    if(N==3){
	        cout<<"010"<<endl;
	    }
	    else if(N==4){
	        cout<<"1001"<<endl;
	    }
	    else if(N==5){
	        cout<<"01010"<<endl;
	    }
	    else if(N==6){
	        cout<<"010010"<<endl;
	    }
	    else{
	        N=N-3;
	        str+="010";
	        while(N!=3){
	            N=N-1;
	            str+="0";
	        }
	        str+="010";
	        cout<<str<<endl;
	    }
	    
	    
	}
	return 0;
}
