#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        bool has1 = false, has2 = false;
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") has1 = true;
            if (s.substr(i, 4) == "2026") has2 = true;
        }
        if (!has1 || has2) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") cnt++;
        }
        int best = 4;
        string t2 = "2026";
        for (int i = 0; i + 3 < n; i++) {
            int d = 0;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != t2[j]) d++;
            }
            best = min(best, d);
        }
        cout << min(cnt, best) << endl;
    }
}
