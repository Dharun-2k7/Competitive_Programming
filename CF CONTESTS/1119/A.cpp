#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n, k;
        cin >>n>>k;
        string s; cin >> s;
        int a = 0;
        for (int i = 0; i < n; i += k) {
            bool b = 1;
            for (int j = i; j < i + k; j++) {
                if (s[j] == '0') {
                    b = 0;
                    break;
                }
            }
            if (b)
                a++;
        }
        cout << a << endl;
    }
}