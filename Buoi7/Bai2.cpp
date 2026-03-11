#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

// check xem co phai so felacy ko
bool check1(ll n)
{
    if (n == 0 || n == 1)
        return true;
    ll f1 = 1, f2 = 0;
    for (int i = 2; i <= 92; i++)
    {
        ll fn = f1 + f2;
        if (fn == n)
            return true;
        f2 = f1;
        f1 = fn;
    }
    return false;
}

bool check2(ll n)
{
    ll f[100];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i <= 92; i++)
    {
        if (n == f[i])
            return true;
    }
    return false;
}

int main()
{
    ll n;
    cin >> n;

        cout << "YES\n";
    else
        cout << "NO\n";
}