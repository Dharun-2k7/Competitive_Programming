#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string& str) {
    return str == string(str.rbegin(), str.rend());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (is_palindrome(s)) {
            cout << 0 << endl << endl;
            continue;
        }

        bool done = false;

        for (int mask = 0; mask < (1 << n); ++mask) {
            string rem = "", remc = "";
            vector<int> ind;

            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    rem += s[i];
                    ind.push_back(i + 1);
                } else {
                    remc += s[i];
                }
            }

            if (rem.find("10") != string::npos) {
                continue;
            }

            if (is_palindrome(remc)) {
                cout << ind.size() << endl;
                for (size_t i = 0; i < ind.size(); ++i) {
                    cout << ind[i];
                    if (i + 1 < ind.size()) cout << " ";
                    else cout << endl;
                }
                done = true;
                break;
            }
        }

        if (!done) {
            cout << -1 << endl;
        }
    }

    return 0;
}
