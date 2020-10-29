#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");
    int s, l1, r1, l2, r2, x1, x2;
    cin >> s >> l1 >> r1 >> l2 >> r2;
    bool running = true;
    x1 = l1;
    if (x1 + r2 < s) 
    {
        x2 = r2;
        if (s > r1 + x2)
        {
            cout << "-1" << endl;
            running = false;
        }
        else;
    }
    else 
    {
        if (s < l1 + l2) 
        {
            cout << "-1" << endl;
            running = false;
        }
        else 
            x2 = s - x1;
    }
    if (running) {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}