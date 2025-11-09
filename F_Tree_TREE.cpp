#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vi> g(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vi par(n + 1, 0), order;
        order.push_back(1);
        par[1] = -1;
        for (int i = 0; i < (int)order.size(); i++) {
            int v = order[i];
            for (int to : g[v]) {
                if (to != par[v]) {
                    par[to] = v;
                    order.push_back(to);
                }
            }
        }

        vi sub(n + 1, 1);
        for (int i = n - 1; i >= 0; i--) {
            int v = order[i];
            for (int to : g[v]) {
                if (to != par[v]) {
                    sub[v] += sub[to];
                }
            }
        }

        ll ans = 0;
        int limit = n - k;

        for (int v = 1; v <= n; v++) {
            ll cont = 1;
            for (int to : g[v]) {
                int comp;
                if (to == par[v]) comp = n - sub[v];
                else comp = sub[to];
                if (comp <= limit) cont += comp;
            }
            ans += cont;
        }

        cout << ans << endl;
    }
}
