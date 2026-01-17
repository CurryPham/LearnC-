#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Cap so nhan (Cong boi)
    long long a,b,c,d;
    int q;
    cin >> a >> b >> c >> d;
    q = b / a;
    if(b*q == c && c*q == d) cout << "Yes";
    else cout << "No";

    return 0; 
}