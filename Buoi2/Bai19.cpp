#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int a,n,m,x,y; cin >> a >> n >> m;
    if(n % a == 0) x = n / a;
    else x = n /a + 1;
    if(m % a == 0) y = m / a;
    else y = m /a + 1;
    
    return 0; 
}