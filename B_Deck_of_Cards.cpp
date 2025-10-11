#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else if (c == '1') cnt1++;
            else cnt2++;
        }
        if (k >= n) {
            for (int i = 0; i < n; ++i) cout << '-';
            cout << endl;
            continue;
        }
        int topl = 1 + cnt0 + cnt2;    
        int topr = n - cnt1;          
        int btml = 1 + cnt0;          
        int btmr = n - cnt1 - cnt2;   

        for (int i = 1; i <= n; ++i) {
            if (i < btml || i > topr) cout << '-';
            else if (i >= topl && i <= btmr) cout << '+';
            else cout << '?';
        }
        cout << endl;
    }
    return 0;
}

