#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        auto getMSB = [](ll x) -> int {
            if (x == 0) return -1;
            return 63 - __builtin_clzll(x);
        };

        int msb_a = getMSB(a);
        int msb_b = getMSB(b);

        if (msb_b > msb_a) {
            cout << -1 << '\n';
            continue;
        }

        vector<ll> ops;

        for (int i = 0; i <= msb_a; ++i) {
            int ba = ( (a >> i) & 1 );
            int bb = ( (b >> i) & 1 );
            if (ba != bb) {
                ll x = 1LL << i;
                ops.push_back(x);
                a ^= x;
            }
        }

        if (a != b) {
            cout << -1 << '\n';
        } else {
            cout << ops.size() << '\n';
            if (!ops.empty()) {
                for (size_t i = 0; i < ops.size(); ++i) {
                    if (i) cout << ' ';
                    cout << ops[i];
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
