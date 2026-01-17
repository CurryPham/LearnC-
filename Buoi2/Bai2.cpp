#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // S = a*(b+c)+b*(a+c)
    int a,b,c; cin >> a >> b >> c;
    long long kq = 1ll * a * (b+c) + 1ll * b * (a+c);
    cout << kq << endl;;

    return 0; 
}