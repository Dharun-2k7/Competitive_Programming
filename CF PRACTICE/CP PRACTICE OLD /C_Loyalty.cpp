#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll > a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        deque<ll> dq(a.begin(), a.end());
        ll s = 0, bonus = 0;
        vector<ll > ans;
        ans.reserve(n);
        while (!dq.empty()) {
            ll curr = dq.back();
            ll lvl = s / x;
            ll nxt = (s + curr) / x;

            if (nxt > lvl) {
                bonus += curr;
                ans.push_back(curr);
                s += curr;
                dq.pop_back();
            } else {
                ans.push_back(dq.front());
                s += dq.front();
                dq.pop_front();
            }
        }

        cout << bonus << endl;
        for (int i = 0; i < n; i++) {
            cout << ans[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
}
