#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int h1, m1, h2, m2, r1, r2 = 0;
	char t;
	cin >> h1 >> t >> m1;
	cin >> h2 >> t >> m2;
	r1 = h1 * 60 + m1;
	r2 = h2 * 60 + m2;
	if (r2 - r1 <= 15)
		cout << "Встреча состоится" << endl;
	else
		cout << "Встреча не состоится" << endl;
}