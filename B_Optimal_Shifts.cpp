#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> pos;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                pos.push_back(i);

        if (pos.size() == n) {
            cout << 0 << "\n";
            continue;
        }

        int k = pos.size();
        int mx = 0;

        for (int i = 0; i < k; i++) {
            int a = pos[i];
            int b = pos[(i + 1) % k];
            int gap = (b - a - 1 + n) % n;
            mx = max(mx, gap);
        }

        cout << mx << "\n";
    }

    return 0;
}
