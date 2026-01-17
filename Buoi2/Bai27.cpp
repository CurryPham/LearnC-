#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Lam tron so
    double a; cin >> a;
    if(abs(a - (int)(a)) <= 0.5 ){
        cout << (int)(a) << endl;
    }else cout << (int)(a)+1 << endl;

    return 0; 
}