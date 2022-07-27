#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define gu(x) (x).begin(), (x).end()

int count(string s, char a)
{
    int temp = 0;
    for (auto p : s)
    {
        if (p == a)
        {
            temp++;
        }
    }
    return temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> mp;

        mp['1'] = count(gu(s), '1');
        mp['0'] = count(gu(s), '0');

        int ans = max(mp['0'], mp['1']) - min(mp['0'], mp['1']);

        int freq = 0;
        if (ans % k)
        {
            freq++;
        }

        ans /= k;
        ans += freq;

        cout << ans << endl;
    }
    return 0;
}