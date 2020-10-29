#include <iostream>
using namespace std;

struct Alcohol
	{
		string name;
		int value;
		double volume;
	};

int main()
{
	int money, n;
	cin >> money >> n;
	Alcohol input;
	Alcohol result;
	for (int i = 0; i < n; i++)
	{
		cin >> input.name >> input.value >> input.volume;
		int liters = (money / input.value) * input.volume;
		if (input.value > money)
		{
			cout << -1 << endl;
			return 0;
		}
		else;
		int result_liters = (money / result.value) * result.volume;
		if (liters > result_liters)
			result = input;
	}
		int bottles_count = money / result.value;
		cout << result.name << " " << bottles_count << endl;
		cout << bottles_count * result.volume << endl;
		cout << money - result.value * bottles_count << endl;
}