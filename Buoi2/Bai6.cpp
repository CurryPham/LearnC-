#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Chuyen do C sang do F voi cong thuc F = (C * 9/5) + 32
    int c; cin >> c;
    double F = c * 9.0 / 5 + 32;
    cout << fixed << setprecision(2) << F << endl;

    return 0; 
}