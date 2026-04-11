#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> s;
        for (int i = 0, x; i < n; ++i) {
            cin >> x;
            s.insert(x);
        } 
        int ans = 2 * s.size()- 1;
        cout << ans << endl;
    }
}
