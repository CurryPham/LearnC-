#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Chia tien
    int a,b,c,n; cin >> a >> b >> c >> n;
    int t = (a+b+c+n)/3;
    if((a + b + c + n) % 3 == 0 && t >= a && t >= b && t >= c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0; 
}