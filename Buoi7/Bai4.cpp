#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using ll = long long;
using namespace std;

// Cap so nguyen to cung nhau

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        for (int j = i; j <= b; j++)
        {
            if (__gcd(i, j) == 1)
            {
                cout << '(' << i << ',' << j << ')' << endl;
            }
        }
    }
}
