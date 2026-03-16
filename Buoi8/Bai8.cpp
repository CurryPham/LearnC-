#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

bool check(int n)
{
    while (n)
    {
        int r = n % 10;
        if (r % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}

// dem va liet ke casc so toan chu so le trong mang
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            dem++;
        }
    }
    cout << dem << endl;
    cout << a[n] << endl;
}
