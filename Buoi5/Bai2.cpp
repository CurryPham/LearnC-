#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Tính tổng các số chẵn trong đoạn từ 1 tới R và in ra kết quả
// 1<=L<=R<=10^6

long long tong(int l, int r)
{
    long long sum = 0;
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            sum += 1;
        }
    }
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << tong(l, r) << endl;

    return 0;
}