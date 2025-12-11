#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;  cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int mx = a[0];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < mx) ans++;
            else mx = a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
