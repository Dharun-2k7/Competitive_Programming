#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        ll s, k, m;
        cin >> s >> k >> m;
        ll f = m / k;
        ll r = m % k;
        ll st;
        if (f % 2 == 0) {
            st = s;
        } else {
            st = min(s, k);
        }
        if (r == 0) {
            cout << st << endl;
        } else {
            cout << max(0LL, st - r) << endl;
        }
    }
}
