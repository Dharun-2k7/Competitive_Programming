#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        vector<long long> sum(n + 1), eq(n + 1);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) sum[i + 1] = sum[i] + a[i];
        for (int i = 0; i < n; i++)
            eq[i + 1] = eq[i] + (i + 1 < n && a[i] != a[i + 1]);

        for (int i = 0; i < n; i++) {
            int ans1 = n + 1, ans2 = n + 1;

            if ((i > 0 && a[i - 1] > a[i]) || (i + 1 < n && a[i + 1] > a[i])) {
                ans1 = ans2 = 1;
            }

            int l = 0, r = i - 1;
            while (l <= r) {
                int m = (l + r) >> 1;
                if (sum[i] - sum[m] > a[i] && (i - 1 == m || eq[i - 1] - eq[m] != 0)) {
                    ans1 = i - m;
                    l = m + 1;
                } else r = m - 1;
            }

            l = i + 1; r = n - 1;
            while (l <= r) {
                int m = (l + r) >> 1;
                if (sum[m + 1] - sum[i + 1] > a[i] && (m == i + 1 || eq[m] - eq[i + 1] != 0)) {
                    ans2 = m - i;
                    r = m - 1;
                } else l = m + 1;
            }

            int ans = min(ans1, ans2);
            cout << (ans == n + 1 ? -1 : ans) << (i + 1 == n ? '\n' : ' ');
        }
    }
}
