#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n, x, sm = 0, mx = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        sm += x;
        mx = max(mx, x);
    }
    if (sm % 2 || sm < 2 * mx) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
