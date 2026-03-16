#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using ll = long long;
using namespace std;

int main()
{
    int n;
    cin >> n; // nhap n xong moi khai bao a[n]
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long temp : a) // for each dung khi chi muon duyet qua cac phan tu cua mang, khong can chi so
    {
        cout << temp << " ";
    }
    cout << endl;
}
