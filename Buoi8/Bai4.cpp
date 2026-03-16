#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

bool nt(ll n) // ham kiem tra so nguyen to
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n; // nhap n xong moi khai bao a[n]
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (nt(a[i]))
            dem++;
    }
    cout << dem << endl;
}
