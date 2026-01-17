#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Cap so cong ( n * (u1 + (u1 + (n - 1))*d)) / 2
    // ( n * (u1 + un) / 2
    // un = u1 + (n -1)*d
    long long n,u1,d; cin >> n >> u1 >> d;
    cout << ( n * (u1 + (u1 + (n - 1)*d))) / 2 << endl;

    return 0; 
}