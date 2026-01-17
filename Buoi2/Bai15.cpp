#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Neu ko phai in hoa thi cho in hoa neu ko thi nguoc lai
    char c; cin >> c;
    if(c >= 'A' && c <= 'Z'){
        c += 32;
    }
        else if(c >= 'a' && c <= 'z'){
        c -= 32;
    }
    cout << c << endl;

    return 0; 
}