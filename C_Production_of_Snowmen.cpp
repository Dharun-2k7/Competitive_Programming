#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vi a(n), b(n), c(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int &x : c) cin >> x;

        vi badAB(n, 0), badBC(n, 0);

        for (int d = 0; d < n; d++) {
            for (int i = 0; i < n; i++) {
                if (a[i] >= b[(i + d) % n]) badAB[d]++;
                if (b[i] >= c[(i + d) % n]) badBC[d]++;
            }
        }

        vi cntAB(n, 0);
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                int d = (j - i + n) % n;
                if (badAB[d] == 0) cntAB[j]++;
            }
        }

        ll ans = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                int d = (k - j + n) % n;
                if (badBC[d] == 0) ans += cntAB[j];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
