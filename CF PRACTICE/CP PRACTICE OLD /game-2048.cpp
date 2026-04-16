#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long
#define vi vector<int>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    vi queries(t);
    int maxY = 0;
    for (int i = 0; i < t; i++) {
        cin >> queries[i];
        if (queries[i] > maxY) maxY = queries[i];
    }

    vi w;
    for (int j = 2;; j++) {
        ll pow2 = 1LL << j;
        ll val = (ll)(j - 1) * pow2;
        if (val > maxY) break;
        w.push_back((int)val);
    }

    vi dp(maxY + 1, 0);
    dp[0] = 1;

    for (int coin : w) {
        for (int s = coin; s <= maxY; s++) {
            dp[s] += dp[s - coin];
            if (dp[s] >= MOD) dp[s] -= MOD;
        }
    }

    for (int i = 0; i < t; i++) {
        cout << dp[queries[i]] << endl;
    }
}
