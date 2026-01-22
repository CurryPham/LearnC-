#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    long long kq = 0;
    for(int i = 1; i <= n; i++){
        kq += pow(i,3);
    }
    cout << kq << endl;
    return 0; 
}