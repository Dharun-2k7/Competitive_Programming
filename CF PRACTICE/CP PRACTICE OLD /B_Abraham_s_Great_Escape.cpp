#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vi vector<int> 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll tot = n * n;
        ll trap = tot - k;
        if (trap == 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        vector<string> g(n, string(n, 'U'));
        vector<vi> used(n, vi(n, 0));
 
        if (trap % 2 == 1) {
            int i = n - 2, j = 0;
            g[i][j+1] = 'D';
            g[i+1][j+1] = 'L';
            g[i+1][j] = 'R';
            used[i][j+1] = 1;
            used[i+1][j+1] = 1;
            used[i+1][j] = 1;
            trap -= 3;
        }
 
        for (int i = n - 1; i >= 0 && trap > 0; --i) {
            for (int j = 0; j < n && trap > 0; ) {
                if (used[i][j]) {
                    j++;
                    continue;
                }
                if (j + 1 < n && !used[i][j+1]) {
                    g[i][j] = 'R';
                    g[i][j+1] = 'L';
                    used[i][j] = 1;
                    used[i][j+1] = 1;
                    trap -= 2;
                    j += 2;
                } else {
                    if (i - 1 >= 0 && !used[i-1][j] && trap > 0) {
                        g[i-1][j] = 'D';
                        g[i][j] = 'U';
                        used[i-1][j] = 1;
                        used[i][j] = 1;
                        trap -= 2;
                    }
                    j++;
                }
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << g[i] << endl;
        }
    }
    return 0;
}



/*obs:
    ok so n x n grid
    each cell has arrow (U D L R)
    abraham starts anywhere, follows arrows til outside
 we need  exactly k starting cells that escape
easiest if arrow points outside ---> border pos escape instantly
inner pos can chain to those border pos

    tried parity idea (odd/even) but that's not the full story
    real impossible case = k == n*n - 1 (cant make exactly one NOT escape)
    everything else 0..n*n is doable

we may try starting with  all 'L' 
    then mark the pos  as 'U' one by one until we have k escaping pos
      do it columnwise in 2 passes: even cols then odd cols
      (j = 0,2,4... fill top to bottom; then j = 1,3,5... fill top to bottom) ans we can  stp when we reached k

    if k == n*n - 1 - - > print NO
    else we can print YES and output grid made above

*/
