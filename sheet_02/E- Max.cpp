#include <iostream>
using namespace std;
int main()
{
 
int n = 0, max = 0,a=0;
	cin >> n;
	while (n--)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
		}
	}
	cout << max;
}
