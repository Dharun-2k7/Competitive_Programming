<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt[2] = {0, 0};
        int n = (int)s.size();
        for (char c : s) {
            cnt[c - '0']++;
        }
        for (int i = 0; i <= n; i++) {
            if (i == n || cnt[1 - (s[i] - '0')] == 0) {
                cout << n - i << "\n";
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt[2] = {0, 0};
        int n = (int)s.size();
        for (char c : s) {
            cnt[c - '0']++;
        }
        for (int i = 0; i <= n; i++) {
            if (i == n || cnt[1 - (s[i] - '0')] == 0) {
                cout << n - i << "\n";
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
