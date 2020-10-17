#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа" << endl;
	cin >> a >> b;
	swap(a, b);
	cout << a << endl << b << endl;
}