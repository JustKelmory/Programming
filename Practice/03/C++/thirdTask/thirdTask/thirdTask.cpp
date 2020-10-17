#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите первое и второе целое число\n"; 
	cin >> a >> b; 
	cout << "Сумма: " << a + b << endl << "Разность: " << a - b << endl;
	cout << "Произведение: " << a * b << endl;
	if (b != 0)
		cout << "Частное: " << a / b << endl;
	else
		cout << "Деление на ноль невозможно" << endl;
}