#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int a = count(s.begin(), s.end(), 'a');
        int diff = a - (n - a);
        if (diff == 0) 
        { 
            cout << 0 << endl; 
            continue; 
        }
        int off = 2 * n;
        vector<int> last(4 * n + 5, -1);
        last[off] = 0; 
        int pref = 0;
        int ans = n + 1;
        for (int i = 1; i <= n; ++i) {
            pref += (s[i-1] == 'a') ? 1 : -1;
            int need = pref - diff;
            int idx = off + need;
            if (idx >= 0 && idx < (int)last.size() && last[idx] != -1)
                ans = min(ans, i - last[idx]);
            last[off + pref] = i;
        }
        if (ans == n + 1 || ans == n) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
