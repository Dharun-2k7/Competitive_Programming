#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool ok = true;
        for (int i = 0; i < n && ok; ++i) {
            if (s[i] == '0') {
                if (i == 0 || i == n-1) continue;
                if (s[i-1] == '0' || s[i+1] == '0') continue;
                if ((i-2 >= 0 && s[i-2] == '0') || (i+2 < n && s[i+2] == '0')) continue;
                ok = false;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
