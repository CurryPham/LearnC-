#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // To hop chap
    // C2n = n!/ 2!(n-2)! = (n(n-1)(n-2)!) / (2(n-2)!) = (n(n-1)) / 2
    int n; cin >> n;
    cout << (n*(n-1)) / 2 << endl;

    return 0; 
}