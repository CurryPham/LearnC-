#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // Tim tong so buoc uoc va liet ke
    int n; cin >> n;
    int demuoc = 0;
    for (int i = 1; i <= n; i++){
        if(n % i == 0) ++demuoc;
    }
    cout << demuoc << endl;

    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        };
    }
    return 0; 
}