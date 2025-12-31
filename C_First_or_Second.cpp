#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void sol() {
    ll n; cin >> n;
    vector<ll> a(n + 2);
    for (ll i = 1; i <= n; i++) cin >> a[i];
    vector<ll> dp(n + 2, 0), h(n + 2, 0), suf(n + 3, 0);
    for (ll i = n; i >= 1; i--) {
        suf[i] = a[i] + suf[i + 1];
    }
    dp[n] = 0;
    h[n] = 0;
    for (ll i = n - 1; i >= 1; i--) {
        dp[i] = max(a[i] + h[i + 1], -suf[i + 1]);
        h[i] = max(dp[i], -a[i] + h[i + 1]);
    }
    cout << dp[1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) sol();

    return 0;
}
