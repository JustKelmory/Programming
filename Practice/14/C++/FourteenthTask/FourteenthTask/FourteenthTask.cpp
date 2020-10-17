#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, r = 0;
	cin >> n;
	for (int i = 0; n > i; i++)
	{
		if (pow (2, i) <= n)
		{
			r++;
		}
	}
	cout << r << endl;
}
