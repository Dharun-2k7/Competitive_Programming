#include <bits/stdc++.h>
using namespace std;

vector<int> at_most(const vector<int>& a, int K) {
    int n = (int)a.size();
    vector<int> R(n);
    if (K < 0) {
        for (int i = 0; i < n; ++i) R[i] = i - 1;
        return R;
    }

    unordered_map<int,int> cnt;
    cnt.reserve(1024);
    int distinct = 0;
    int r = 0;

    for (int l = 0; l < n; ++l) {
        while (r < n) {
            int x = a[r];
            // if x is new and adding it would exceed K, stop
            if (cnt.find(x) == cnt.end() && distinct + 1 > K) break;
            // add a[r]
            if (cnt[x] == 0) ++distinct; // if absent, cnt[x] creates entry with 0 then we increment distinct
            ++cnt[x];
            ++r;
        }
        // now a[l..r-1] has <= K distinct
        R[l] = r - 1;
        // remove a[l] before moving l -> l+1
        int y = a[l];
        --cnt[y];
        if (cnt[y] == 0) {
            cnt.erase(y);
            --distinct;
        }
    }
    return R;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k, L, R;
        cin >> n >> k >> L >> R;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> Rk = at_most(a, k);
        vector<int> Rk1 = at_most(a, k-1);

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int low = i + (L - 1);           // smallest allowed end index c
            int high = min(n - 1, i + (R - 1)); // largest allowed end index c
            int left = max(Rk1[i] + 1, low);
            int right = min(Rk[i], high);
            if (left <= right) ans += (long long)(right - left + 1);
        }
        cout << ans << '\n';
    }
    return 0;
}
