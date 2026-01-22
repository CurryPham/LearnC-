#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // tong ca so chia het cho <= n
    // S = 2 + 4 + 6 + n/2*2
    int n; cin >> n;
    int S = 0;
    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0) S += i;
    }
    cout << S << endl;
    return 0; 
}