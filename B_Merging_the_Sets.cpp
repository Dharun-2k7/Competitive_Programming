#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, m;  
        cin >> n >> m;
        vector<vi> sets(n);
        vi freq(m + 1, 0);       
        vi last(m + 1, -1);      
        for (int i = 0; i < n; ++i) {
            int l; cin >> l;
            sets[i].resize(l);
            for (int j = 0; j < l; ++j) {
                int x; cin >> x;
                sets[i][j] = x;
                ++freq[x];
                last[x] = i;
            }
        }
        bool mis = false;
        for (int x = 1; x <= m; ++x) {
            if (freq[x] == 0) {
                mis = true; 
                break;
            }
        }
        if (mis) {
            cout << "NO\n";
            continue;
        }

        vector<char> forced(n, 0);
        for (int x = 1; x <= m; ++x) {
            if (freq[x] == 1) forced[last[x]] = 1;
        }

        vector<char> covered(m + 1, 0);
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (forced[i]) {
                cnt++;
                for (int x : sets[i]) covered[x] = 1;
            }
        }

        bool tot = true;
        for (int x = 1; x <= m; ++x) {
            if (!covered[x]) { 
                tot = false; 
                break; 
            }
        }

        if (!tot) {
            cout << "YES"<<endl;
        } else {
            int optional = n - cnt;
            cout << (optional >= 2 ? "YES" : "NO")<<endl;
        }
    }
}
