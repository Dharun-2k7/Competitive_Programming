#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ind = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[ind]) ind = i;
        }

        if (ind != 0) swap(a[0], a[ind]);

        int mx = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);
            ans += mx;
        }

        cout << ans << endl;
    }
    return 0;
}
