#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    char c; cin >> c;
    if(c >= 'a' && c <= 'z') cout << c++ << endl;
    else if(c >= 'A' && c <= 'Z') {c += 33; cout << c << endl;}
    else if(c == 'z' || c == 'Z') cout << 'a' << endl;
    else cout << "INVALID" << endl;

    return 0; 
}

// A-Z: 65 - 90
// a-z: 97 - 122