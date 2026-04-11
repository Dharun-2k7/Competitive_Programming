#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans = 0, sum = 0;
        int r = n - 1;

        for (int i = 0; i < n; i++) {
            if (i == r) break;

            if (sum + a[i] >= a[r]) {
                a[i] -= (a[r] - sum);
                ans += a[r] + 1;
                a[r] = 0;
                sum = 0;
                r--;
                i--;
            } else {
                sum += a[i];
            }
        }

        ans += (a[r] - sum + 1) / 2 + sum + (a[r] > 1);
        cout << ans << "\n";
    }
    return 0;
}
