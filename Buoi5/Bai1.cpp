#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long long tong (int l, int r){
    long long sum = 0;
    for(int i = l; i<= r; i++){
        if(i % 2 ==0){
            sum +=i;
        }
    }
    return sum;
}

int main() {

    int l,r; cin >> l >> r;
    cout << tong(l,r) << endl;
    return 0; 
}