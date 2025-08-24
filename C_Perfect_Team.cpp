#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--) {
        int c, m, x;
        cin >> c >> m >> x;
        int l = 0, r = (c + m + x) / 3 + 1;
        while(l + 1 < r) {
            int mid = (l + r) / 2;
            if(mid <= c && mid <= m && 3 * mid <= c + m + x) {
                l = mid; 
            } else {
                r = mid; 
            }
        }
        cout << l << endl;
    }
    return 0;
}
