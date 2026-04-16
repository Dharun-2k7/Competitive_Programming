#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        vector<bool> ans(26, false);
        int n=(int)s.size();
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j + 1 < n && s[j + 1] == s[i]) j++;

            if ((j - i) % 2 == 0) {       
                ans[s[i] - 'a'] = true;
            }

            i = j;
        }

        for (int k = 0; k < 26; k++) {
            if (ans[k]) cout << char('a' + k);
        }
        cout << endl;
    }
}
