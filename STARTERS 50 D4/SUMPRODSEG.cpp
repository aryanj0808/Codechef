#include <bits/stdc++.h>
using namespace std;
vector<long long>vec;
void answer(long long n)
{
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (n / i == i)
                vec.push_back(i);
            else
                vec.push_back(i), vec.push_back(n / i);
        }
    sort(vec.begin(), vec.end());
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  num1, num2;
        cin >> num1 >> num2;
        vec.clear();
        answer(num2);
        bool flag = false;
        pair<long, long> first, second;
        for (auto &i : vec)
        {
            if (i <= num2 / i)
            {
                second = {i, num2 / i};
                first = {num1 - (i - 1), i - 1};
                if (first.first <= first.second)
                {
                    flag = true;
                    break;
                }
                first = {num2 / i + 1, num1 - (num2 / i + 1)};
                if (first.first <= first.second)
                {
                    flag = true;
                    break;
                }
            }
            else
                break;
        }
        if (flag)
            cout << first.first << " " << first.second << endl
                 << second.first << " " << second.second << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}