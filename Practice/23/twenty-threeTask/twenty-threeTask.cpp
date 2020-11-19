#include <iostream>
#include "Factorial.h"
#include <cmath>
#include "Sin.h"
using namespace std;
int main()
{
	cout << "n\tn!" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t" << factorial(i) << endl;
		cout << endl;
	}
	cout << "x\tsin(x)" << endl;
	for (int i = 1; i <= 4; i++)
	{
		cout << Sin(i) << endl;
	}
}