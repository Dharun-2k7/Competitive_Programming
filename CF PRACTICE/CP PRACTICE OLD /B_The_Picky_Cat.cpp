#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int x = abs(a[0]);
        int k = (n + 1) / 2;
        int cnt = 0;

        for (int i = 1; i < n; i++) {
            if (abs(a[i]) >= x) cnt++;
        }

        cout << (cnt >= k - 1 ? "YES" : "NO") << endl;
    }
}
