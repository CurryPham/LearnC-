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
    for (int i = 0; i < n; i++) // for lap khi can chi so de truy cap vao cac phan tu cua mang
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
