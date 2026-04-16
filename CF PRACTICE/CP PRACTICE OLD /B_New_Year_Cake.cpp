#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll w = a, d = b;
        ll cur = 1;
        int lay1 = 0;
        for (int i = 0; ; i++) {
            if (i % 2 == 0) {
                if (w < cur) break;
                w -= cur;
            } else {
                if (d < cur) break;
                d -= cur;
            }
            lay1++;
            cur <<= 1;
        }

        w = a; d = b;
        cur = 1;
        int lay2 = 0;
        for (int i = 0; ; i++) {
            if (i % 2 == 0) {
                if (d < cur) break;
                d -= cur;
            } else {
                if (w < cur) break;
                w -= cur;
            }
            lay2++;
            cur <<= 1;
        }
        cout << max(lay1, lay2) << endl;
    }
}