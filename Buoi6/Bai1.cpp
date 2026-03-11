#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Kiem tra xem cac so phai so nguyeb to khong
bool nt(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % 1 == 0)
            return false;
    }
    return n > 1;
}

bool csnt(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int r = n % 10;
        sum += r;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return false;
        n /= 10;
    }
    if (nt(sum))
        return true;
    else
        false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = 0; i <= b; i++)
    {
        if (csnt(i) && nt(i))
        {
            ++dem;
        }
    }
    cout << dem << endl;
}