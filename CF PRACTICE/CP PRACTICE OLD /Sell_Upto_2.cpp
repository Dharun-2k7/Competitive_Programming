#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll NEG = (ll)-9e18;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        vector<vector<ll>> dp(n+1, vector<ll>(n+1, NEG));
        dp[0][0] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int s = 0; s <= i; ++s) dp[i][s] = NEG;
            for (int s = 0; s <= i-1; ++s) {
                if (dp[i-1][s] == NEG) continue;
                for (int x = 0; x <= 2; ++x) {
                    if (s + x > i) break;
                    if (x > i - s) break;
                    ll val = dp[i-1][s] + (ll)x * a[i];
                    dp[i][s + x] = max(dp[i][s + x], val);
                }
            }
        }

        cout << dp[n][n] << endl;
    }
}
