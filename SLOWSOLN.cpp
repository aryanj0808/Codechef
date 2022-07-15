#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
        cin >> x >> y >> z;
        int n = (x > (z / y)) ? (z / y) : x;
        long long int count = 0;
        
        int i=0;
        for (;i<n; i++){
            count += y * y;
        }
        ;
        int tempo = z - y * (z / y);

        if (tempo && (x > i)){
            count += tempo * tempo;

            cout << count << endl;
        }
        else{
            cout << count << endl;
        }

	}
	return 0;
}
