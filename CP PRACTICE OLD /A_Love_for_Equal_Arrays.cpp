#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;

            if (a[i] % b[i] == 0 || b[i] % a[i] == 0)
                ans += 1;
            else
                ans += 2;
        }
        cout << ans << endl;
    }
}
