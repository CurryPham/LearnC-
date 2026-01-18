#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Su hao phong
    int c1,c2,c3,c4,c5; cin >> c1 >> c2 >> c3 >> c4 >> c5;
    if((c1 + c2 + c3 + c4 + c5) % 5 == 0 && c1 != 0 && c2 != 0 && c3 != 0 && c4 != 0 && c5 != 0){
        cout << (c1 + c2 + c3 + c4 + c5) / 5 << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0; 
}