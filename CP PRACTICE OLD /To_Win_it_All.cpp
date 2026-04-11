#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    vector<pair<ll, ll>> items(n);
    for (int i = 0; i < n; i++) items[i] = {b[i], a[i]};
    sort(items.rbegin(), items.rend());

    const ll NEG = LLONG_MIN / 4;
    vector<ll> dp(n + 1, NEG);
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        ll bi = items[i].first;
        ll ai = items[i].second;
        for (int j = i; j >= 0; j--) {
            if (dp[j] == NEG) continue;
            ll profit;
            if (j % 2 == 0) {
                profit = dp[j] - ai;
            } else {
                profit = dp[j] + bi - ai;
            }
            dp[j + 1] = max(dp[j + 1], profit);
        }
    }

    ll ans = 0;
    for (int j = 0; j <= n; j++) ans = max(ans, dp[j]);
    cout << ans << "\n";

    return 0;
}
