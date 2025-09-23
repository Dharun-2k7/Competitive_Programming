#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        vector<int> freq(n+1, 0);
        for (int i=0;i<n;i++){
            int x; cin >> x;
            if (x >= 1 && x <= n) freq[x]++;
        }
        int ans = 0;
        for (int f = 1; f <= n; ++f) {
            int k = 0;
            for (int v = 1; v <= n; ++v) if (freq[v] >= f) ++k;
            ans = max(ans, k * f);
        }
        cout << ans << endl;
    }
}
