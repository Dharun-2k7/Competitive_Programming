 #include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s;cin >> s;

        int a[26];
        for (int i = 0; i < 26; i++) a[i] = -1;

        bool ok = true;

        for (int i = 0; i < n; i++) {
            int cur = s[i] - 'a';
            if (a[cur] == -1) {
                a[cur] = i % 2;
            } else if (a[cur] != (i % 2)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
