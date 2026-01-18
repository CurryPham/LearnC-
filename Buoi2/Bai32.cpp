#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long x = min(k2, min(k5, k6));
    long long res = x * 256;
    if(x == k2){
        x = res;
    }else {
        long long t = min (k3, k2 - x);
        cout << t * 32 + res << endl;
    }

    return 0; 
} 