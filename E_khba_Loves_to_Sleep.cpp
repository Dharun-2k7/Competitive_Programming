#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll lo = 0, hi = x + 1;
        while (lo < hi) {
            ll mid = (lo + hi + 1) / 2;
            ll cnt = 0;
            if (a[0] >= mid) cnt += (a[0] - mid + 1);
            for (int i = 0; i + 1 < n; i++) {
                ll l = a[i] + mid, r = a[i + 1] - mid;
                if (r >= l) cnt += (r - l + 1);
                if (cnt >= k) break;
            }
            if (a[n - 1] + mid <= x) cnt += (x - (a[n - 1] + mid) + 1);

            if (cnt >= k) lo = mid;
            else hi = mid - 1;
        }

        ll d = lo;
        vector<ll> ans;

        if (a[0] >= d) {
            for (ll p = 0; p <= a[0] - d && (int)ans.size() < k; p++) {
                if (ans.empty() || ans.back() != p) ans.push_back(p);
            }
        }
        for (int i = 0; i + 1 < n && (int)ans.size() < k; i++) {
            ll l = a[i] + d, r = a[i + 1] - d;
            for (ll p = l; p <= r && (int)ans.size() < k; p++) {
                if (ans.empty() || ans.back() != p) ans.push_back(p);
            }
        }
        if (a[n - 1] + d <= x) {
            for (ll p = a[n - 1] + d; p <= x && (int)ans.size() < k; p++) {
                if (ans.empty() || ans.back() != p) ans.push_back(p);
            }
        }

        for (int i = 0; i < k; i++) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}
