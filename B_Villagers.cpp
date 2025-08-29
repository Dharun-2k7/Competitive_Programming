#include <bits/stdc++.h>
using namespace std; 
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        sort(g.begin(), g.end());

        int ans = 0;
        for (int i = n - 1; i >= 0; i -= 2)
            ans += g[i];

        cout << ans << '\n';
    }
}
