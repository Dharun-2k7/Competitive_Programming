#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n), c(n);
        ll total = 0;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) { 
            cin >> c[i]; 
            total += c[i]; 
        }
        vector<ll> dp(n, 0);
        ll best = 0;
        for (int i = 0; i < n; ++i) {
            dp[i] = c[i]; 
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) dp[i] = max(dp[i], dp[j] + c[i]);
            }
            best = max(best, dp[i]);
        }
        cout << (total - best) << endl;
    }
}
