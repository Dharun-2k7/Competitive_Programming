#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll s = 0;
        int z = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s += x;
            if (x == 0) z++;
        }
        ll a = s - (n - 1);
        ll b = n - z;
        ll c = min({(ll)n, a, b});
        if (c < 1) c = 1;
        cout << c << "\n";
    }
}
