#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    long long kq = 0;
    for(int i = 1; i <= n; i++){
        if (i % 2 == 0){
            kq += i;
        }
        else kq -=i;
    }
    cout << kq << endl;
    return 0; 
}