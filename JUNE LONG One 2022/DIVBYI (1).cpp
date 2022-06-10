#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;

		int arr[n];
		int c = n / 2;

		for (int i = 0; i < n; i++)
		{
			if (n % 2 == 0)
			{
				if (i % 2 == 0)
				{
					arr[i] = c - (i / 2);
				}
				else
				{
					arr[i] = c + (i / 2) + 1;
				}
				
			}
			else
			{
				if (i % 2 == 0)
				{
					arr[i] = c + (i / 2)+1;
				}
				else
				{
					arr[i] = c - (i / 2);
				}
				
			}
			cout << arr[i] << " ";
		}
		cout<<endl;
	}
	return 0;
}
