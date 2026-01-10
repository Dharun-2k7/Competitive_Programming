#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;
        ll k = 1;
        while (1) {
            bool ok = 1;
            for (int i = 0; i < n; i++) {
                if (a[i] % k != a[0] % k) {
                    cout << k << '\n';
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
            k <<= 1;
        }
    }
}
