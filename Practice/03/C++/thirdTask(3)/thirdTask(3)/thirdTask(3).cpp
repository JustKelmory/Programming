#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	double b;
	cout << "Введите целое и дробное числа" << endl;
	cin >> a >> b;
	cout << "Сумма: " << a + b << endl << "Разность: " << a - b << endl;
	cout << "Произведение: " << a * b << endl;
	if (b != 0)
		cout << "Частное: " << a / b << endl;
	else
		cout << "Деление на ноль невозможно" << endl;
}
