#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> q(n), r(n);
        for (int i = 0; i < n; i++) cin >> q[i];
        for (int i = 0; i < n; i++) cin >> r[i];
        sort(r.begin(), r.end());
        unordered_map<ll,ll> f;
        f.reserve(n*2);
        for (ll x: q) f[x]++;
        vector<pair<ll,ll>> v;
        v.reserve(f.size());
        for (auto &p: f) {
            ll x = p.first, y = p.second;
            ll m = (k - x) / (x + 1);
            if (k - x < 0) m = -1;
            if (m >= 1) v.emplace_back(m, y);
        }
        sort(v.begin(), v.end());
        ll a = 0;
        int p = 0;
        for (auto &c: v) {
            ll m = c.first, y = c.second;
            int u = upper_bound(r.begin()+p, r.end(), m) - r.begin();
            ll w = u - p;
            ll z = min(w, y);
            a += z;
            p += (int)z;
            if (p >= n) break;
        }
        cout << a << "\n";
    }
    
}
