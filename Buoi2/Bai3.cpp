#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Nhap 2 so, in ra tong hieu tich thuong
    long long a , b; cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if(b==0)cout << "INVALID" << endl;
    else{cout << fixed << setprecision(4) << 1.0 * a / b << endl;}

    return 0; 
}