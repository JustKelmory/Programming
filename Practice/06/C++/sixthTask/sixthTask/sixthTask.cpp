#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	double d, x1, x2 = 0;

	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	d = pow(b,2) - (4 * a * c);
	if (d < 0)
	{
		cout << "Действительных корней нет" << endl;
	}
	else if (a == 0 and b == 0 and c == 0)
	{
		cout << "Все корни действительны" << endl;
	}
	else if (a == 0 or (a == 0 and c == 0))
	{
		x1 = -c / b;
		cout << "x1 = " << x1 << endl;
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "x1 = " << x1 << endl;
	}
	else 
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	cout << "x1= " << x1 << endl << "x2= " << x2 << endl;
	}
	
}