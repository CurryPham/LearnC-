#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    long long n; cin >> n;
    long long tonguoc = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            tonguoc += 1;
            if(n / i != i ) tonguoc += n / i;
        }
    }
    cout << tonguoc << endl;

    return 0; 
}