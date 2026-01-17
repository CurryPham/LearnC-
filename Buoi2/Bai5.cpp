#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tinh khoang cach Euclid giua 2 he toa do Oxy
    int x1,x2,y1,y2; cin >> x1 >> x2 >> y1 >> y2;
    double kq = sqrt( pow (x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(2) << kq << endl;

    return 0; 
}