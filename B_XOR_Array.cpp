#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> p(n + 1);
        p[0] = 0;

        for (int i = 1; i <= n; i++)
            p[i] = i;

        p[r] = p[l - 1];
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            a[i] = p[i] ^ p[i - 1];

        for (int i = 1; i <= n; i++)
            cout << a[i] << (i == n ? '\n' : ' ');
    }
}
