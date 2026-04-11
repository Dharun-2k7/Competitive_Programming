#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;cin >> n >> m >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> d(n + 1, -1);
    queue<int> q;
    d[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int to : g[v]) {
            if (d[to] == -1) {
                d[to] = d[v] + 1;
                q.push(to);
            }
        }
    }

    vector<ll> ans(k + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int p = a[i];
        ans[p] = max(ans[p], (ll)d[i]);
    }

    for (int i = 1; i <= k; ++i) {
        cout << ans[i];
        if (i < k) cout << ' ';
    }
    cout << '\n';

    return 0;
}
