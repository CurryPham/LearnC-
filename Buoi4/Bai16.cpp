#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    long long n; cin >> n;
    if(n == 0) cout << 1 << endl; return 0;
    int dem = 0;
    while(n!=0){
        ++dem;
        n /= 10;
    }
    cout << dem << endl;
    return 0; 
}