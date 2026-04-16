#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];

        int mins = 1e9, maxs = -1e9, mind = 1e9, maxd = -1e9, cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i][j] == '#') {
                    mins = min(mins, i + j);
                    maxs = max(maxs, i + j);
                    mind = min(mind, i - j);
                    maxd = max(maxd, i - j);
                    cnt++;
                }
            }
        }

        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                int c = (s[i][j] == '#') + (s[i][j + 1] == '#') + (s[i + 1][j] == '#') + (s[i + 1][j + 1] == '#');
                if (c == cnt) ok = true;
            }
        }

        if (ok || maxs - mins <= 1 || maxd - mind <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
