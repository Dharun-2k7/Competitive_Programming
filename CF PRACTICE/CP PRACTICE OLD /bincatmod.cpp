#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;

        for (int len = 1; (1LL << (len - 1)) <= n; len++) {
            ll start = 1LL << (len - 1);
            ll end = min(n, (1LL << len) - 1);

            for (ll i = start; i <= end; i++) {
                for (int k = len - 1; k >= 0; k--) {
                    int bit = (i >> k) & 1;
                    ans = (ans * 10 + bit) % MOD;
                }
            }
        }

        cout << ans << endl;
    }
}
/* this approach solves test case1 but the other test cases it fails due to the large inputs
*/
