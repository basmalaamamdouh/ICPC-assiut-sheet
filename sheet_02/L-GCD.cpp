#include <iostream>
using namespace std;
int main()
{
 
int a=0, b=0, gd = 1;
cin >> a >> b;
if (a > b)
{
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (i > gd)
			{
				gd = i;
			}
		}
	}
}
else if (b > a)
{
	for (int i = 1; i < b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (i > gd)
			{
				gd = i;
			}
		}
	}
}
else if (a == b)
{
	gd = a;
}
cout << gd;
	
}
