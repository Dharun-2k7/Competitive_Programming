#include <bits/stdc++.h>

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector b(n, std::vector<int>(n));
    while (m--) {
        int o, i, j;
        std::cin >> o >> i >> j;
        i--;
        j--;
        b[i][j] = b[j][i] = o;
    }
    std::vector<std::vector<int>> g(n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (b[i][i] == 1 && b[j][j] == 2) {
            if (b[i][j] == 1) g[j].push_back(i);
            else g[i].push_back(j);
        }
    }
    std::vector<int> d(n), ans(n);
    for (int u = 0; u < n; u++) for (auto v : g[u]) d[v]++;
    int cnt = 0;
    std::queue<int> q;
    for (int u = 0; u < n; u++) if (!d[u]) q.push(u);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (b[u][u] == 1) ans[u] = ++cnt;
        else ans[u] = -(++cnt);
        for (auto v : g[u]) if (!--d[v]) q.push(v);
    }
    if (cnt == n) {
        for (int i = 0; i < n; i++) for (int j = i; j < n; j++) {
            if (b[i][j] == 1 && ans[i] + ans[j] < 0) return void(std::cout << "NO\n");
            if (b[i][j] == 2 && ans[i] + ans[j] >= 0) return void(std::cout << "NO\n");
        }
        std::cout << "YES\n";
        for (int i = 0; i < n; i++) std::cout << ans[i] << " \n"[i + 1 == n];
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int t;
    std::cin >> t;
    while (t--) solve();
}