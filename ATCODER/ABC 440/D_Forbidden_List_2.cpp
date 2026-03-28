#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    while (q--) {
        ll x, y;
        cin >> x >> y;

        ll lo = x, hi = x + y + n + 5;
        while (lo < hi) {
            ll mid = (lo + hi) / 2;
            ll cnt = upper_bound(a.begin(), a.end(), mid) - lower_bound(a.begin(), a.end(), x);
            ll val = (mid - x + 1) - cnt;
            if (val >= y)
                hi = mid;
            else
                lo = mid + 1;
        }
        cout << lo << endl;
    }

}
