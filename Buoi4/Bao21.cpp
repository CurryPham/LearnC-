#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n; cin >> n;
    int dem = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n; j++){
            cout << dem << " "; ++dem;
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 1; i<=n; i++){
        int ktao = i;
        for(int j = 1; j<= n; j++){
            cout << ktao << " "; ++ktao;
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n; j++){
            if(j <= n - 1) cout << "~";
            else cout << i;
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 1; i<=n; i++){
        int ktao = i;
        int dem = n - 1;
        for(int j=1; j<= i; j++){
            cout << ktao << " ";
            ktao += dem;
            --dem;;
        }
        cout << endl;
    }

    return 0; 
}