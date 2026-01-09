#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int d = x;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                d = i;
                break;
            }
        }
        if (d == x) d = 1; 
        cout << x - d << endl;
    }
    return 0;
}
