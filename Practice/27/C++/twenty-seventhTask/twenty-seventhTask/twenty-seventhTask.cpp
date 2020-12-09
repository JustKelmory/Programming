#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    vector<int> mass;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mass.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < (n - i); j++) {
            if (mass[j] % 10 > mass[j - 1] % 10) {
                swap(mass[j - 1], mass[j]);
            }
            else if (mass[j] % 10 == mass[j - 1] % 10 and mass[j] > mass[j - 1]) {
                swap(mass[j - 1], mass[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mass[i] << " ";
    }
}