#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n, k, q; cin >> n >> k >> q;

        vector<ll> a(n + 1, 0);
        vector<ll> mn(n + 2, 0), mx(n + 2, 0); // +2 for difference array

        while (q--) {
            ll c, l, r; cin >> c >> l >> r;
            if (c == 1) {
                mn[l]++; 
                mn[r + 1]--;
            } else {
                mx[l]++;
                mx[r + 1]--;
            }
        }

        for (ll i = 1; i <= n; i++) {
            mn[i] += mn[i - 1];
            mx[i] += mx[i - 1];
        }

        for (ll i = 1; i <= n; i++) {
            if (mn[i] > 0 && mx[i] > 0) a[i] = k + 1;
            else if (mx[i] > 0) a[i] = i % k;
            else a[i] = k;
        }

        for (ll i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }

    return 0;
}
