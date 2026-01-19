#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<ll> ar(n), sp(m);
        for (int i = 0; i < n; i++) cin >> ar[i];
        for (int i = 0; i < m; i++) cin >> sp[i];

        string s;cin >> s;

        vector<ll> ds(k + 1, 0);
        for (int i = 1; i <= k; i++) {
            ds[i] = ds[i - 1] + (s[i - 1] == 'R' ? 1 : -1);
        }

        unordered_map<ll, int> mp;
        for (int i = 1; i <= k; i++) {
            if (!mp.count(ds[i])) mp[ds[i]] = i;
        }

        vector<int> die(n, k + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ll nd = sp[j] - ar[i];
                if (mp.count(nd)) {
                    die[i] = min(die[i], mp[nd]);
                }
            }
        }

        vector<int> cnt(k + 2, 0);
        for (int i = 0; i < n; i++) {
            if (die[i] <= k) cnt[die[i]]++;
        }

        int alv = n;
        for (int i = 1; i <= k; i++) {
            alv -= cnt[i];
            cout << alv << (i == k ? '\n' : ' ');
        }
    }
}
