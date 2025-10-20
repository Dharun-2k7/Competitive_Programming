#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main() {
    int t;  cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vi a(n);
        vi cnt(30, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 0; j < 30; j++) {
                cnt[j] += ((a[i] >> j) & 1);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int tot = 0;
            for (int j = 0; j < 30; j++) {
                bool f = ((a[i] >> j) & 1);
                if (f) 
                    tot += (1 << j) * (n - cnt[j]);
                else 
                    tot += (1 << j) * cnt[j];
            }
            ans = max(ans, tot);
        }
        cout << ans << endl;
    }
}
