#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    long long n;
    int a,b; cin >> a >> b;
    if(2*a > b) cout  << n/2 * b + (n%2)*a << endl;
    else cout << n * a << endl;

    return 0; 
}