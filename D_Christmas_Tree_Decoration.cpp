#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;

const ll MOD = 998244353;

ll pw(ll a, ll b) {
    ll r = 1;
    a %= MOD;
    while (b) {
        if (b & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return r;
}

ll fact[55], ncr[55][55];

void pre() {
    fact[0] = 1;
    for (int i = 1; i <= 50; i++) fact[i] = (fact[i - 1] * i) % MOD;

    for (int i = 0; i <= 50; i++) {
        ncr[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            ncr[i][j] = (ncr[i - 1][j - 1] + ncr[i - 1][j]) % MOD;
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vi a(n + 1);
    ll S = 0;
    for (ll &x : a) {
        cin >> x;
        S += x;
    }

    ll q = S / n;
    int r = S % n;

    ll need = 0;
    int sm = 0, lg = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] <= q) {
            need += (q - a[i]);
            sm++;
        } else {
            lg++;
        }
    }

    ll k = a[0] - need;
    if (k < 0) {
        cout << 0 << "\n";
        return;
    }

    ll ways = 0;
    for (int j = 0; j <= min(r, sm); j++) {
        if (j <= k && r - j <= lg) {
            ways = (ways + ncr[sm][j] * ncr[lg][r - j]) % MOD;
        }
    }

    ll ans = ways;
    ans = (ans * fact[r]) % MOD;
    ans = (ans * fact[n - r]) % MOD;

    cout << ans << "\n";
}

int main() {
    pre();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
