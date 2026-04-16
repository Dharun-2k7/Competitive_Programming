#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        int m = a.size();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            int cnt = 1;
            for (int j = i + 1; j < m; j++) {
                if (a[j] - a[j - 1] == 1)
                    cnt++;
                else
                    break;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
}
