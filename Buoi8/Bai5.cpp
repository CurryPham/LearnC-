#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

// bai 5: tim so lon nhat trong mang
// int main()
// {
//     int n;
//     cin >> n; // nhap n xong moi khai bao a[n]
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int res = a[0]; // coi phan tu dau tien la lon nhat
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > res) // neu phan tu dang xet lon hon res thi cap nhat res
//             res = a[i];
//     }
//     cout << res << endl;
// }
int main()
{
    int n;
    cin >> n; // nhap n xong moi khai bao a[n]
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > res) // neu phan tu dang xet lon hon res thi cap nhat res
            res = a[i];
    }
    cout << res << endl;
}
