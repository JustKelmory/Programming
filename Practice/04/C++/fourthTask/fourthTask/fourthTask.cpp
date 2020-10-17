#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int c = 0;
	cout << "Введите два числа" << endl;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << a << endl << b << endl;
}