#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // so chinh phuong (i^2)
    long long n; cin >> n;
    for (int i; i <= sqrt(n);i++){
        cout << 1ll * i * i << " ";
    }
    return 0; 
}