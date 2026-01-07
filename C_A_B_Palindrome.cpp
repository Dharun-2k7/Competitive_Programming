#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >>t ;
    while (t--) {
        int a, b;cin >> a >> b;
        string s; cin >> s;
        int n = a + b;
        bool ok = true;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == '0' || s[n - i - 1] == '0') {
                if (s[i] == '1' || s[n - i - 1] == '1') {
                    ok = false;
                    break;
                }
                s[i] = '0';
                s[n - i - 1] = '0';
                a -= 2;
            } 
            else if (s[i] == '1' || s[n - i - 1] == '1') {
                s[i] = '1';
                s[n - i - 1] = '1';
                b -= 2;
            }
        }
        if (!ok) {
            cout << -1 << endl;
            continue;
        }
        if (n % 2) {
            if (s[n / 2] == '0') a--;
            else if (s[n / 2] == '1') b--;
        }
        if (a < 0 || b < 0) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == '?') {
                if (a >= 2) {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a -= 2;
                } 
                else if (b >= 2) {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b -= 2;
                } 
                else {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok) {
            cout << -1 << endl;
            continue;
        }
        if (n % 2 && s[n / 2] == '?') {
            if (a > 0) {
                s[n / 2] = '0';
                a--;
            } else {
                s[n / 2] = '1';
                b--;
            }
        }

        if (a != 0 || b != 0) {
            cout << -1 << endl;
            continue;
        }

        cout << s << endl;
    }
    return 0;
}
