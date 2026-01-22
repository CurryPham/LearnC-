#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Tinh tong
    int n; cin >> n;
    long long sum = 0;
    for(int i = 0; i <= n; i++){
        sum +=i;
    }
    cout << sum << endl;
    return 0; 
}