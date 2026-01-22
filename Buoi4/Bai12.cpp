#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    long long kq = 0;
    for(int i = 1; i <= 2*n; i += 2){
        kq += i;
    }
    cout << kq << endl;

    return 0; 
}