#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //!n
    int n;cin >> n;
    int S = 1;
    for (int i = 1; i <= n; i++) {
        S *= i;
    }
    cout << S << endl;
    return 0; 
}