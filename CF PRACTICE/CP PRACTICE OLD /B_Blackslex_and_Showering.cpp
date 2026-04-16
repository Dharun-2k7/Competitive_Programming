#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }

        ll mx = 0;
        mx = max(mx, (ll)abs(a[0] - a[1]));

        mx = max(mx, (ll)abs(a[n - 2] - a[n - 1]));

        for (int i = 1; i + 1 < n; i++) {
            ll gain =
                abs(a[i - 1] - a[i]) +
                abs(a[i] - a[i + 1]) -
                abs(a[i - 1] - a[i + 1]);
            mx = max(mx, gain);
        }

        cout << total - mx<< endl;
    }

    return 0;
}
