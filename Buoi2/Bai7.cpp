#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tinh so lon nhat va so nho nhat (a/b) * b
    int a,b; cin >> a >> b;
    double kq = (a/b) * b;
    cout << kq << endl;
    if(a % b == 0) cout << b;
    else cout << (a / b + 1) * b << endl;

    return 0; 
}