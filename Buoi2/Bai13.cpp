#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Kiem tra sang co bao nhieu nam, tuan
    int a; cin >> a;
    int N = a / 365;
    int T = (a - N) / 365;
    cout << N << " " << T << " " << a - (365 * N) - (7 * T);

    return 0;
}