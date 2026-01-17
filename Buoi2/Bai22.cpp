#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Dong xu
    long long n,S; cin >> n >> S;
    if(S%n == 0) cout << S/n;
    else cout << S/n + 1 << endl;

    return 0; 
}