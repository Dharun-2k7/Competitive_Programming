#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), cnt(n+5, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int x = -1;
        for (int i = 1; i <= n; i++) {
            if (cnt[i] == 0) {
                x = i;
                break;
            }
        }
        if (x == -1) {
            for (int i = 0; i < k; i++) {
                cout << a[n - 3 + (i % 3)] << " ";
            }
        } else {
            int z = a[n-1]; 
            int y = -1;
            for (int i = 1; i <= n+1; i++) {
                if (i != x && i != z) {
                    y = i;
                    break;
                }
            }
            vector<int> v = {x, y, z};
            for (int i = 0; i < k; i++) {
                cout << v[i % 3] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
