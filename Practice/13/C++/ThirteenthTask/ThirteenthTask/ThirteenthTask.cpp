#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int c = 1;
    int counter = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            counter++;
        }
    }
    if (counter >= 3)
    {
        cout << "Составное" << endl;
    }
    else
    {
        cout << "Простое" << endl;
    }
}