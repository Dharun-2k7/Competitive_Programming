#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            int r = sqrt(x);
            if (r * r != x) {
                ok = true;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
