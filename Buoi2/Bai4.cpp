#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tinh chu vi, dien tich hinh tron 
        // Chu vi (C):
        // C = 2 × π × r (r là bán kính)
        // Diện tích (S):
        // S = π × r²
    double pi = 3.14;
    int r; cin >> r;
    cout << fixed << setprecision(4) << 2 * pi * r << endl;
    cout << fixed << setprecision(4) << pi * pow(r, 2) << endl;

    return 0; 
}