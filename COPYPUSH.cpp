#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string str;
		cin >> str;

		string temp = "YES";

		int count = n;

		while(count >=1){
			if(count % 2 == 0){
				
				int Hcount = count / 2;

				
				for(long i = 0; i < Hcount; i++){
					if(str[i] != str[Hcount + i]){
						temp = "NO";
						break;
					}
				}

				count = count / 2;
			}
			else{
				count--;
			}
		}

		cout << temp << "\n";

	}
	return 0;
}