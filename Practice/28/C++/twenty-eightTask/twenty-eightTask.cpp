#include <iostream>
#include<vector>
#include <algorithm>
#include<map>
using namespace std;
void print_factorization(unsigned int n)
{
    map  <unsigned int, unsigned int> numb;
    int div = 2;
    while (n > 1)
    {
        for (unsigned int i = 2; i <= n; i++)
        {
            if (!(n % i))
            {
                n /= i;

                numb[i] = numb.count(i) ? numb[i] + 1 : 1;
                break;
            }
        }
    }
    cout << "1";
    for (auto now : numb)
    {
        if (now.second > 1)
        {
            cout << "*" << now.first << "^" << now.second;
        }
        else
        {
            cout << "*" << now.first;
        }
    }
}
int main()
{
    unsigned int n;
    cin >> n;
    print_factorization(n);
}
