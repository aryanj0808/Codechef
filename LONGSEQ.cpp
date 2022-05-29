#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int count1 = 0;
        int count0 = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }

        if (count1 == 1 || count0 == 1)
        {
            cout << "Yes" << endl;
        }
       
        else
        {
            cout << "No" << endl;
        }
    }
}
