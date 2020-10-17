#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x0, v0, t;
	double g = 9.8, xt=0;
	cin >> x0 >> v0 >> t;
	xt = x0 + (v0 * t) - ((g * (t * t)) / 2);
	cout << xt << endl;
}