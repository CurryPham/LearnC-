#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tinh diem hoc sinh
    double a,b,c,d; cin >> a >> b >> c >> d;
    double kq = (a + b + c * 2 + d * 3) / 7;
    if(kq >= 8) cout << "Gioi";
    else if(kq >= 6.5 || kq < 8) cout << "Kha";
    else if(kq >= 5 || kq < 6.5) cout << "Trung binh";
    else cout << "Yeu";

    return 0; 
}