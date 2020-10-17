#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, k, x1, x2, x3, y1, y2, y3, p, S;
	cin >> k;
	if (k == 1)
	{
		cin >> a >> b >> c;
		if (a == 0 or b == 0 or c == 0)
			cout << "Не треугольник" << endl;
		else
		cout << "S = " << (a + b + c) / 2 << endl;
	}
	else if (k == 2)
	{
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		a = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		b = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		if ((a + b > c) and (a + c > b) and (c + b > a))
		{
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S << endl;
		}
		else
		{
			cout << "Данного треугольника не существует." << endl;
		}
	}
}
