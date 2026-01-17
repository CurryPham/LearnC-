#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int a; cin >> a;
    if(a % 2 == 0 ) cout << "Yes\n";
    else cout << "No\n";

    if(a % 3 == 0 && a % 5 ==0) cout << "Yes\n";
    else cout << "No\n";

    if(a % 3 == 0 && a % 7 != 0) cout << "Yes\n";
    else cout << "No\n";

    if(a >=30 && a <= 50) cout << "Yes\n";
    else cout << "No\n";

    if(a >= 30 && (a % 2 == 0 || a % 3 == 0 || a % 5 == 0)) cout << "Yes\n";
    else cout << "No\n";

    if(a >= 10 && a <= 99 && (a % 10 == 2 || a % 10 == 3 || a % 10 == 5 || a % 10 == 7)) cout << "Yes\n";
    else cout << "No\n";

    if(a <= 100 && a % 23 == 0) cout << "Yes\n";
    else cout << "No\n";

    if(a >= 10 && a <= 20) cout << "Yes\n";
    else cout << "No\n";

    if(a % 10 % 3 == 0) cout << "Yes\n";
    else cout << "No\n";

    return 0; 
}