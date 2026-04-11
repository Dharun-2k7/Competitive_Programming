#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        ll tot = 0;
        ll maxi = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;
            tot += max(a[i], a[j]);
        }
        cout << (tot- maxi) << endl;
    }
}
