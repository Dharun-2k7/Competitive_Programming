#include <bits/stdc++.h>
using namespace std;

int l[200000], r[200000];

int main() {

    int t; cin >> t;
    while (t--) {
        int n;cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }
        int lo = 0, hi = 1000000000;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            int L = 0, R = 0;
            bool ok = true;
            for (int i = 0; i < n; i++) {
                L -= mid;
                R += mid;
                L = max(L, l[i]);
                R = min(R, r[i]);
                if (L > R) {
                    ok = false;
                    break;
                }
            }
            if (ok) hi = mid;
            else lo = mid + 1;
        }
        cout << lo << endl;
    }
}
