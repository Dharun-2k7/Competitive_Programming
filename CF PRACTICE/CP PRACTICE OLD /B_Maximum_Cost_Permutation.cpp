#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) s.insert(i + 1);
        vector<int> ans(n);
        for (auto &x : ans) {
            cin >> x;
            if (x) s.erase(x);
        }
        for (auto &x : ans) {
            if (!x) {
                auto it = s.end();
                --it;
                x = *it;
                s.erase(it);
            }
        }

        int l = n + 1, r = -1;
        for (int i = 0; i < n; i++) {
            if (ans[i] != i + 1) {
                l = min(l, i);
                r = max(r, i);
            }
        }

        cout << (r == -1 ? 0 : r - l + 1) << endl;
    }
}


