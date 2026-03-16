#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 9; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
