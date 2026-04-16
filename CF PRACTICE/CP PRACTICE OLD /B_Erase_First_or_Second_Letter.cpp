#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mp;
        vector<int> d(n);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (mp[s[i]] == 1) cnt++;
            d[i] = cnt;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += d[i];
        }

        cout << ans << "\n";
    }
    return 0;
}
