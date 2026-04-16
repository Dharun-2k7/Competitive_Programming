#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        vector<vi> ans(n, vi(m, INT_MAX));
        for (int u = 0; u < n; u++) {
            for (int d = u + 1; d < n; d++) {
                vi cols;
                for (int c = 0; c < m; c++) {
                    if (g[u][c] == '1' && g[d][c] == '1') cols.push_back(c);
                }
                int sz = cols.size();
                for (int i = 0; i < sz; i++) {
                    for (int j = i + 1; j < sz; j++) {
                        int l = cols[i];
                        int r = cols[j];
                        int area = (d - u + 1) * (r - l + 1);
                        for (int x = u; x <= d; x++) {
                            for (int y = l; y <= r; y++) {
                                ans[x][y] = min(ans[x][y], area);
                            }
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ans[i][j] == INT_MAX) cout << 0;
                else cout << ans[i][j];
                if (j + 1 < m) cout << " ";
            }
            cout << endl;
        }
    }
}
