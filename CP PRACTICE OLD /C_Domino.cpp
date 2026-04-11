#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    ll r = a[1];
    for(ll i = 1; i <= r && i <= n; i++) {
        r = max(r, i + a[i] - 1);
    }

    cout << min(r, (ll)n) << "\n";
}
