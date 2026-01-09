#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        ll g = __gcd(a, b);
        if (a / g <= k && b / g <= k) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
