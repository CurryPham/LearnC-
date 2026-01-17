#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // a,b,c la do dai tam giac, kiem tra xem abc co tao thanh mot tam giac hop le khong
    int a,b,c; cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a) cout << "Yes\n";
    else cout << "No\n";

    return 0; 
}