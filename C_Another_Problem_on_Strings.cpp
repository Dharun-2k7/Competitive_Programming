#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll k; cin >> k;
    string s; cin >> s;
    int n = s.size();

    vector<ll> cnt(n + 1, 0);
    cnt[0] = 1;
    ll sum = 0;ll ans = 0;
    for (int i = 0; i < n; i++) {
        sum += (s[i] == '1');
        if (sum >= k) {
            ans += cnt[sum - k];
        }
        cnt[sum]++;
    }
    cout << ans << endl;
}
