#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll GCD(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n;  cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        ll g = a[0];
        for (int i = 1; i < n; i++)
            g = GCD(g, a[i]);
        ll x = -1;
        for (ll i = 2; i <= 100; i++) { 
            if (GCD(g, i) == 1) {
                x = i;
                break;
            }
        }
        cout << x << endl;
    }
}
