#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << n << '\n';
            continue;
        }
        if (k & 1) {
            for (ll i = 0; i < k; i++) {
                cout << n << " ";
            }
            cout << '\n';
            continue;
        }

        for (ll i = 0; i < k - 2; i++) {
            cout << n << " ";
        }

        if ((n & (n - 1)) == 0) {
            cout << 0 << " " << n << '\n';
        } else {
            ll msb = 1LL << (63 - __builtin_clzll(n));
            ll x = msb - 1;
            ll y = n ^ x;
            cout << x << " " << y << '\n';
        }
    }

    return 0;
}
