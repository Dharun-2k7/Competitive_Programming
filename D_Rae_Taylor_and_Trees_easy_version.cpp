#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int &x : p) cin >> x;

        int mn = p[0];
        bool ok = (p[0] == 1); // root must be 1

        for (int i = 1; i < n; i++) {
            mn = min(mn, p[i]);
            if (mn != 1) ok = false;
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
