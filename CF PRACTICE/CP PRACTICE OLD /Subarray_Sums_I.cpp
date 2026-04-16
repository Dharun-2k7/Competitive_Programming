#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    ll sum = 0;
    ll l = 0;
    for (ll r = 0; r < n; r++) {
        sum += a[r];
        while (sum > x) {
            sum -= a[l];
            l++;
        }

        if (sum == x) ans++;
    }

    cout << ans << endl;
}
