#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;  cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        k--;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        ll me = a[k];
        int fs = -1;
        for (int i = 0; i < k; i++) {
            if (a[i] > me) { fs = i; break; }
        }
        int ans = 0;
        if (fs == -1) {
            int w = 0;
            for (int i = 0; i < n; i++) {
                if (i == k) continue;
                if (me > a[i]) w++;
                else break;
            }
            ans = w;
        } else {
            int w1 = 0;
            for (int i = 0; i < n; i++) {
                if (i == k) continue;
                if (me > a[i]) w1++;
                else break;
            }
            int w2 = 0;
            for (int i = fs + 1; i < n; i++) {
                if (i == k) continue;
                if (me > a[i]) w2++;
                else break;
            }
            ans = max(w1, w2);
        }
        cout << ans << "\n";
    }
}
