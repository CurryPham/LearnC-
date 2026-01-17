#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tim so lon nhat, nho nhat
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << min({a,b,c,d}) << " " << max({a,b,c,d}) << endl;


    return 0; 
}