#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<ll> a(n+1), b(n+1), c(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];

    vector<ll> sa(n+1), sb(n+1), sc(n+1);
    for (int i = 1; i <= n; i++) {
        sa[i] = sa[i-1] + a[i];
        sb[i] = sb[i-1] + b[i];
        sc[i] = sc[i-1] + c[i];
    }

    ll tot = sc[n];
    ll best = sa[1] - sb[1];
    ll ans = LLONG_MIN;

    for (int y = 2; y <= n-1; y++) {
        ans = max(ans, best + sb[y] + (tot - sc[y]));
        best = max(best, sa[y] - sb[y]);
    }

    cout << ans << '\n';
    return 0;
}
