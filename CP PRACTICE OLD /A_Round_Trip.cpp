#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long r, x, d;
        int n;
        cin >> r >> x>> d >> n;
        string s; cin >> s;

        int ans = 0;
        for(char c : s) {
            if(c == '1') {   
                ans++;
                r = max(0LL, r - d);
            } else {
                if(r < x) {
                    ans++;
                    r = max(0LL, r - d);
                }
                }
        }
        cout << ans << "\n";
    }
}
