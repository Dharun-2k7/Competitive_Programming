#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a.push_back(i);
            else b.push_back(i);
        }
        ll ans1 = 0, ans2 = 0;
        if (!a.empty()) {
            int m = (int)a.size();
            int mid = m / 2;               
            ll moves = 0;
            for (int i = 0; i < m; ++i) {
                ll target = a[mid] - (mid - i);
                moves += llabs((ll)a[i] - target);
            }
            ans1 = moves;
        }
        if (!b.empty()) {
            int m = (int)b.size();
            int mid = m / 2;
            ll mov = 0;
            for (int i = 0; i < m; ++i) {
                ll target = b[mid] - (mid - i);
                mov += llabs((ll)b[i] - target);
            }
            ans2 = mov;
        }
        ll ans = min(ans1, ans2);
        cout << ans << endl;
    }
}

