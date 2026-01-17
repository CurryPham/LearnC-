#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Doremon leo cau thang
    int n,m; cin >> n >> m;
    int l, r;
    if (n % 2 == 0) l = n / 2;
    else l = n / 2 + 1;
    r = n;
    int res = ( l + m  - 1) / m * m;
    if (res <= r) cout << res << endl;
    else cout << -1 << endl;

    return 0; 
}