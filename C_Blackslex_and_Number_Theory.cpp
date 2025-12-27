#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        ll m = *min_element(a.begin(), a.end());
        ll ans = LLONG_MAX;
        for (ll x : a) {
            if (x == m) continue;
            if (x <= 2 * m) {
                ans = m;
                break;
            }
            ans = min(ans, x - m);
        }

        if (ans == LLONG_MAX) ans = m;
        cout << ans << "\n";
    }
    return 0;
}
