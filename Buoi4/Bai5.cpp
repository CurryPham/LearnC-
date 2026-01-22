#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    bool check = false;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 2022){
            check = true;
        }
    }
    if(check) cout << "Yes";
    else cout << "No";
    return 0; 
}