#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long 
vector<int> frag(vector<int> &a, int k) {
    int n = a.size();
    vi r(n);
    if (k < 0) {
        for (int i = 0; i < n; i++) r[i] = i - 1;
        return r;
    }
    unordered_map<int,int> cnt;
    int dis = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < n) {
            int x = a[j];
            if (cnt[x] == 0 && dis + 1 > k) break; 
            if (cnt[x] == 0) dis++;
            cnt[x]++;
            j++;
        }
        r[i] = j - 1;

        int y = a[i];
        cnt[y]--;
        if (cnt[y] == 0) {
            cnt.erase(y);
            dis--;
        }
    }

    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vi rk = frag(a, k);
        vi rk1 = frag(a, k - 1);
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int low = i + (l - 1);
            int high = min(n - 1, i + (r - 1));
            int left = max(rk1[i] + 1, low);
            int right = min(rk[i], high);
            if (left <= right) ans += (ll)(right - left + 1);
        }

        cout << ans << endl;
    }
}
