#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	vector<string> arr;
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		arr.push_back(s);
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[0] == 'a' and s[4] == '5' and s[5] == '5' and s[6] == '6' and s[7] == '6' and s[8] == '1')
				cout << arr[j] << endl;
			else
				cout << "-1" << endl;
			return 0;
		}
	}
}