#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> cnt(26);
        for (char c : s) {
            cnt[c - 'a']++;
        }
        int cnts = 0, cntOdd = 0;
        for (int c : cnt) {
            cnts += c / 2;
            cntOdd += c % 2;
        }
        int ans = 2 * (cnts / k);
        cntOdd += 2 * (cnts % k);
        if (cntOdd >= k) {
            ans++;
        }
        cout << ans << endl;
    }
}