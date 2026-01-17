#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Kiem tra ky tu
    char c; cin >> c;
    if(c >= 'a' && c <= 'z') cout << "LOWER";
    else if(c >= 'A' && c <= 'Z') cout << "UPPER";
    else if(c >= '0' && c <= '9') cout << "DIGIT";
    else cout << "SPECIAL";

    return 0; 
}

// ASCII 256 ki tu: 0 - 255
// A-Z: 65- 90
// a-z: 97-122
// 0-9: 48-57