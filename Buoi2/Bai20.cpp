#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Frog
    long long a, b, k; cin >> a >> b;
    if(k % 2 == 1) {
        cout << (k/2 + 1) * a - (k/2) * b;
    }
    else cout << (k/2) * a - (k/2) * b;
    
    return 0; 
}