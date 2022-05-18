#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;

signed main() {
    int task;cin>>task;
    set<char> special;special.insert('c');special.insert('g');special.insert('l');special.insert('r');
    while(task--){
        int len;
        string s;cin>>len>>s;int sol=1;
        for(char ch:s)
            if(special.find(ch)!=special.end())sol=(sol*2)%M;
        cout<<sol<<endl;
    }
	// your code goes here
	return 0;
}
