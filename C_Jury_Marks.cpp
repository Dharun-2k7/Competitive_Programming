#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    vector<ll> d(n + 1), a(k);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
        d[i] += d[i - 1];
    }
    for (int i = 0; i < k; i++) cin >> a[i];

    set<ll> st;
    for (int i = 1; i <= n; i++) {
        st.insert(a[0] - d[i]);
    }

    int ans = 0;
    for (ll x : st) {
        set<ll> cur;
        for (int i = 1; i <= n; i++) cur.insert(x + d[i]);
        bool ok = 1;
        for (ll v : a) ok &= cur.count(v);
        ans += ok;
    }

    cout << ans << endl;
}
