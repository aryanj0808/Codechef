#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    
    int t;
    cin >> t;
    while (t--){
        int n;
        int arr[1000];
        cin >> n;
        arr[1] = 0;
        int count = 0;
        int temp = 0;
        for (int i = 2; i <= n; i++)
            if (i % 2 == 0)
                arr[i] = --count;
            else
                arr[i] = ++temp;
        for (int i = 1; i <= n; ++i)
            cout << arr[i] - count + 1 << ' ';
        cout << endl;

        
    }
}