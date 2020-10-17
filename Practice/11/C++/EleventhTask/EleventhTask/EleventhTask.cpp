#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int i = 1;
	cin >> a >> b;
	int c;
	c = a;
	while (b > i)
	{
		a = a * c;
		i++;
	}
	cout << a << endl;
}