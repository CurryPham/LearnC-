#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

// check doi xung
void dx(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] == a[r])
        {
            return true; // ko dx
        }
        ++l;
        --r;
    }
    return true;
}

void reverse(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        swap(a[l], a[r]);
        ++l;
        --r;
    }
}

// hoan vi 2 phan tu
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
