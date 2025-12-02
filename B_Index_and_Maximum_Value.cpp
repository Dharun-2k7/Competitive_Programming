#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<ll>a(n);
        for (ll &x : a) cin >> x;
        ll mx = *max_element(a.begin(), a.end());
        while (m--) {
            char c;
            ll l, r;
            cin >> c >> l >> r;
            if (l <= mx && mx <= r) {
                if (c == '+') mx++;
                else mx--;
            }
            cout << mx << " ";
        }
        cout << "\n";
    }
}
