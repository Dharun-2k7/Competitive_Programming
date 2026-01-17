#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = true;
        for (int i = 0; i + 1 < n; i++) {
            if ((a[i] % 2) == (a[i + 1] % 2)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
