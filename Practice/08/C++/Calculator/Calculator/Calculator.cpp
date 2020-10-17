#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b = 0;
	char t;
	cin >> a >> t >> b;
	switch (t)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b != 0)
			cout << a / b << endl;
		else
			cout << "На ноль делить запрещено" << endl;
		break;
	}
}