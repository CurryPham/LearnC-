#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    double kq = 0;
    for(int i = 1;i <= n; i++){
        kq += 1.0 / (2*i);
    }
    cout << fixed << setprecision(5) << kq << endl;
    return 0; 
}