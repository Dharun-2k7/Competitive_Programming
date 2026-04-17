#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, w;
        cin >> n >> w;

        vector<ll> c(n);
        for (int i = 0; i < n; i++) cin >> c[i];

        int m = 2 * w;
        vector<ll> res(m, 0);
        for (int i = 0; i < n; i++) {
            res[i % m] += c[i];
        }
        ll cur = 0;
        for (int i = 0; i < w; i++) cur += res[i];

        ll ans = cur;
        for (int i = w; i < m + w; i++) {
            cur += res[i % m];
            cur -= res[(i - w) % m];
            ans = min(ans, cur);
        }

        cout << ans << endl;
    }
}
