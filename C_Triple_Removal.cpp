#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vi a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        vector<vi> sum(2, vi(n+1, 0));
        vi diff(n+1, 0), diffsum(n+1, 0);
        for(int i = 1; i <= n; i++) {
            sum[0][i] = sum[0][i-1];
            sum[1][i] = sum[1][i-1];
            sum[a[i]][i]++;

            diff[i] = (a[i] != a[i-1]);
            diffsum[i] = diffsum[i-1] + diff[i];
        }

        while(q--) {
            int l, r;
            cin >> l >> r;
            int z = sum[0][r] - sum[0][l-1];
            int o = sum[1][r] - sum[1][l-1];
            if(z%3 != 0 || o%3 != 0) {
                cout << -1 << "\n";
                continue;
            }

            int ans = z/3 + o/3;
            if(diffsum[r] - diffsum[l] == r-l) ans++;
            cout << ans << "\n";
        }
    }

    return 0;
}
