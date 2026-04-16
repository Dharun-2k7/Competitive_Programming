#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k; k--;
        vector<ll> a(n);
        for (auto &x: a) cin >> x;
        ll me = a[k];

        int fs = -1;
        for (int i = 0; i < k; ++i) if (a[i] > me) { fs = i; break; }

        auto cnt_from = [&](int start)->int{
            int w = 0;
            for (int i = start; i < n; ++i) {
                if (i == k) continue;
                if (me > a[i]) ++w;
                else break;
            }
            return w;
        };

        int ans = 0;
        int w1 = cnt_from(0);      
        if (fs == -1) ans = w1;
        else {
            int w2 = cnt_from(fs+1); 
            ans = max(w1, w2);
        }
        cout << ans << '\n';
    }
    return 0;
}
