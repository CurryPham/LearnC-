#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // HPNY
    int h, m; cin >> h >> m;
    cout << 1440 - (h * 60 - m) << endl;

    return 0; 
}