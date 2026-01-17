#include <iostream>
#include <iomanip>

using namespace std;

// So nguyen:
// int: 4 byte = 32 bits : -2^31 - 2^31 - 1 [-2.10^9 -> 2.10^9]
// long long : 8 byte = 64 bit : -2^63 -> 2^63 - 1 [-9.10^18 -> 9.10^18]

//So thuc
//float: 4 byte = 32 bit : 6 số số thập phân
//doulde: 8 byte = 64 bit : 15 số thập phân

//Ki tu
//char: character : 1byte

// Trong C/C++, casc so khac khong duoc coi la dung (true), chi co 0 duoc coi la sai (false)
int main() {
    int n = 600;
    if ((n >= 500) && (n <= 1000))
        cout << "Test" << endl;
    return 0; 
}