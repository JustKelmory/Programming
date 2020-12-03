#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	vector<int> array;
	int n, m = 0;
	int first;
	int second;
	bool pass;
	cin >> n;
	m = sqrt(n);
	if (m % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			array.push_back(m);
		}
	}
	else if (m % 2 != 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (array[i] < array[j])
			{
				i++;
				j++;
			}
			else if (array[i] > array[j])
				swap(i, j);
		}
	}
	for (int i = 0; i < n; i++)
		cout << array[i] << " " << endl;
}