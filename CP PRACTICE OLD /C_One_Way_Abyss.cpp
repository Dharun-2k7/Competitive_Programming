#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> token(n + 1);
        for (int i = 1; i <= n; ++i) token[i] = i;
        vector<ll> sum(n + 1, 0);
        for (int i = 0; i < m; i++) {
            int x, y;
            ll v;
            cin >> x >> y >> v;
            sum[token[x]] += v;
            sum[token[y]] += v;
            swap(token[x], token[y]);
        }        
        ll ans = 0;
        for (int i = 1; i <= n; ++i) ans = max(ans, sum[i]);
        cout << ans << endl;
    }
}

