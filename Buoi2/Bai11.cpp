#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // kiem tra xem co phai la tam giac vuong, can ,deu khong
    int a,b,c; cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a){
        if(a == b && b == c) cout << 1 << endl; // tam giac deu
        else if(a == b || a == c || b == c) cout << 2 << endl; // tam giac can
        else if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) cout << 3 << endl; // tam giac vuong
        else cout << 4 << endl;
    }
    else cout << "INVALID\n";

    return 0; 
}