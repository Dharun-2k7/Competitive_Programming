#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e18;

ll cost(int x, int y) {
    return abs(x - y);
}

ll cost(int x, int y, int z) {
    int mn = min({x, y, z});
    int mx = max({x, y, z});
    return mx - mn;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        ll ans = INF;
        for (int r = 0; r < 4; r++) {
            vector<ll> dp(n + 1, INF);
            dp[0] = 0; dp[1] = INF;

            for (int i = 2; i <= n; i++) {
                dp[i] = dp[i - 2] + cost(a[i - 1], a[i]);
                if (i >= 3) dp[i] = min(dp[i], dp[i - 3] + cost(a[i - 2], a[i - 1], a[i]));
            }

            ans = min(ans, dp[n]);

            for (int i = 2; i <= n; i++) swap(a[i], a[i - 1]); 
        }
        cout << ans << endl;
    }
}
