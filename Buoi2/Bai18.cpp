#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // rubic
    int n,m; cin >> n >> m;
    if(n == 2) {
        cout << 1ll * n / 2 * m << endl;
    }
    else{
        cout << (1ll * n / 2 * m) + (m / 2) << endl;
    }

    return 0; 
}