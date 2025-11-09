#include <bits/stdc++.h>
using namespace std;

int main() {  
    int n;cin >> n; 
    if (n % 2 == 0) {
        int k = n / 2;
        cout << k << '\n';
        for (int i = 0; i < k; ++i) {
            if (i) cout << ' ';
            cout << 2;
        }
        cout << '\n';
    } else {
        int k = (n - 3) / 2 + 1; 
        cout << k << '\n';
        for (int i = 0; i < (n - 3) / 2; ++i) {
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    return 0;
}
