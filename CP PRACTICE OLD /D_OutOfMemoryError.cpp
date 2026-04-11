#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; ll h;
        cin >> n >> m >> h;
        vector<ll> orig(n);
        for (int i = 0; i < n; i++) cin >> orig[i];
        unordered_map<int, ll> mp;
        while (m--) {
            int b; ll c;
            cin >> b >> c;
            b-=1;
            ll cur = orig[b] + (mp.count(b) ? mp[b] : 0LL) + c;
            if (cur > h) {
                mp.clear();
            } else {
                mp[b] += c;
            }
        }

        for (int i = 0; i < n; i++) {
            ll val = orig[i] + (mp.count(i) ? mp[i] : 0LL);
            cout << val << (i + 1 == n ? '\n' : ' ');
        }
    }
}
