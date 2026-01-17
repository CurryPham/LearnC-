#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // A(x)=x^3 + 3x62 + x +1
    int x; cin >> x;
    long long kq = 1ll * pow(x, 3) + 3ll * pow(x,2) + x + 1;
    cout << kq << endl;
    return 0; 
}