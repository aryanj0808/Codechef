#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n, sum=0, x;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			sum += x;
		}

		cout << sum-n+1 << endl;
    }
    return 0;
}
