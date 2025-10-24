#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        vi a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &y : b) cin >> y;
        ll res = 0, sum = 0;
        int mx = 0;
        for (int i = 0; i < min(n, k); i++) {
            sum += a[i];
            mx = max(mx, b[i]);
            res = max(res, sum + 1LL * mx * (k - i - 1));
        }

        cout << res << endl;
    }
}
