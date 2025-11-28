#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while (t--) {
        int n; ll k;
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
            ll Q = p.first;
            ll cnt = p.second;
            ll rm = (k - Q) / (Q + 1);
            if ( (k - Q) < 0 ) rm = -1;
            if (rm >= 1) v.emplace_back(rm, cnt);
        }
        sort(v.begin(), v.end()); 
        ll ans = 0;
        int pos = 0;
        for (auto &p: v) {
            ll rm = p.first;
            ll need = p.second;
            int ub = upper_bound(r.begin()+pos, r.end(), rm) - r.begin();
            ll avail = ub - pos;
            ll take = min(avail, need);
            ans += take;
            pos += (int)take;
            if (pos >= n) break;
        }
        cout << ans << '\n';
    }
    return 0;
}
