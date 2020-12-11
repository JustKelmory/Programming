#include<iostream>
#include<vector>
#include<locale>
#include <algorithm>
using namespace std;
vector <int> array1(vector <int> b, int n)
{
	int u = 0;
	sort(b.begin(), b.end(), greater<int>());
	if ((b.size() < 5))
	{
		for (int i = 0; i < n; i++)
		{
			if (i < 5)
			{
				cout << b[i] << ' ';
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (int i = b.size() - 5; i < b.size(); i++)
		{
			cout << b[i] << ' ';
		}
	}
	cout << endl;
	return b;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n, c;
	c = 0;
	cin >> n;
	vector <int> a(n);
	vector <int> b(0);
	vector <int> s(0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < a.size(); i++)
	{
		b.push_back(a[i]);
		int n = b.size();
		array1(b, n);

	}
}