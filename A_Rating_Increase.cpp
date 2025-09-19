#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    string ab;
    cin >> ab;
    int best = -1;
    int n = ab.length();
    for (int i = 1; i < n; i++) {
        string l = ab.substr(0, i);
        string r = ab.substr(i);

        if (r[0] != '0') {
            if (l.length() < r.length() || (l.length() == r.length() && l < r)) {
                best= i;
            }
        }
    }
cout << (best == -1 ? "-1\n" : ab.substr(0, best) + " " + ab.substr(best) + "\n");

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
