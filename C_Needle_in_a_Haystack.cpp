#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tt;
    if (!(cin >> tt)) return 0;
    
    while (tt--) {
        string s, t;
        cin >> s >> t;

        array<int, 26> cnt {};
        cnt.fill(0);

        for (char ch : t) {
            cnt[ch - 'a']++;
        }

        bool ok = true;

        for (char ch : s) {
            if (cnt[ch - 'a'] == 0) {
                ok = false;
                break;
            }
            cnt[ch - 'a']--;
        }

        if (!ok) {
            cout << "Impossible\n";
            continue;
        }

        string L = "";

        for (int i = 0; i < 26; i++) {
            L += string(cnt[i], char('a' + i));
        }

        string st = s;
        sort(st.begin(), st.end());

        bool before = (s <= st);

        char f = s[0];
        string ans = "";

        for (char ch : L) {
            if (ch < f) ans += ch;
        }

        if (before) {
            for (char ch : L) {
                if (ch == f) ans += ch;
            }
        }

        ans += s;

        if (!before) {
            for (char ch : L) {
                if (ch == f) ans += ch;
            }
        }

        for (char ch : L) {
            if (ch > f) ans += ch;
        }

        cout << ans << "\n";
    }
    
    return 0;
}
