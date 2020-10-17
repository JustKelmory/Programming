#include <iostream>
using namespace std;
int main()
{
	int a;
	int r = 1;
	int c = 1;
	cin >> a;
	for (int i = 1; i < a; i++)
	{
		c++;
		r = r * c;
	}
	cout << r << endl;
}