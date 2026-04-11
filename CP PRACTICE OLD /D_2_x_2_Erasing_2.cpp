#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int h, w;
        cin >> h >> w;
        vector<string> grid(h);
        vector<pair<int,int>> blacks;
        for (int i = 0; i < h; i++) {
            cin >> grid[i];
            for (int j = 0; j < w; j++) {
                if (grid[i][j] == '#') blacks.push_back({i,j});
            }
        }
        int b = blacks.size();
        int ans = b;
        for (int mask = 0; mask < (1<<b); mask++) {
                   vector<string> g = grid;

            for (int k = 0; k < b; k++) {
                if (mask & (1<<k)) {
                    int x = blacks[k].first;
                    int y = blacks[k].second;
                    g[x][y] = '.'; 
                }
            }
            bool ok = true;
            for (int i = 0; i < h-1; i++) {
                for (int j = 0; j < w-1; j++) {
                    if (g[i][j]=='#' && g[i+1][j]=='#' &&
                        g[i][j+1]=='#' && g[i+1][j+1]=='#') {
                        ok = false; 
                    }
                }
            }

            if (ok) {
                int repaints = 0;
                for (int k = 0; k < b; k++) {
                    if (mask & (1<<k)) repaints++;
                }
                ans = min(ans, repaints);
            }
        }
        cout << ans << endl;
    }
}
//tle
