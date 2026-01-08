#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> vis(n + 2, 0);
        for (int x : a) {
            if (x <= n) vis[x] = 1;
        }
        int mex = 0;
        while (vis[mex]) mex++;

        cout << min(mex, k - 1) << endl;
    }
    return 0;
}
