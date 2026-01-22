#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    double kq = 0;
    for(int i = 1;i <= n; i++){
        kq += 1.0 / i;
    }
    cout << fixed << setprecision(3) << kq << endl;
    return 0; 
}