#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    int S = 0;
    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
        S += i;
    }
    cout << S << endl;
    
    return 0; 
}