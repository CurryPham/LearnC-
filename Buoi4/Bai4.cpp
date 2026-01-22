#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tinh tich cac uoc so tu nhien cua N
    int n;cin >> n;
    long long ans = 1;
    for (int i = 1; i <= sqrt(n); i++){
        ans *= i;
        if (n / i != i){
            ans *= n / i;
        }
    }
    return 0; 
}