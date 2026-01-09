#include <bits/stdc++.h>
using namespace std;
using ll=long long ;


int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b, m;
        cin >> a >> b >> m;
        ll ans = m / a + m / b +2;
        cout << ans << endl;
    }

}
