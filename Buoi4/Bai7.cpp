#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    // long long kq = 0;
    // for(int i = 3; i <= n; i += 3){
    //     kq += i;
    // }
    // cout << kq << endl;
    int m = n / 3;
    long long kq = 3ll * m * (m + 1) / 2;
    cout << kq << endl;
    return 0; 
}