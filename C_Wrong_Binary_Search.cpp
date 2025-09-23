#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >>t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;          
        vector<int> ones;
        for (int i = 0; i < n; ++i) if (s[i] == '1') ones.push_back(i+1);
        bool ok = true;
        int prev = 0;
        for (int pos : ones) {
            int len = pos - prev; 
            if (len == 2) { 
                ok = false; 
                break;
             } 
            prev = pos;
        }
        int tail = n - prev;
        if (tail == 1) ok = false;

        if (!ok) {
            cout << "NO\n";
            continue;
        }
        vector<int> p(n+1, 0); 
        prev = 0;
        for (int pos : ones) {
            int l = prev + 1;
            int r = pos;
            int len = r - l + 1;
            if (len == 1) {
                p[r] = r;
            } else {
                for (int i = l; i <= r-2; ++i) p[i] = i+1;
                p[r-1] = l;
                p[r] = r;
            }
            prev = pos;
        }
        if (prev < n) {
            int l = prev + 1;
            int r = n;
            int len = r - l + 1;
            if (len == 1) {
            } else {
                for (int i = l; i <= r-1; ++i) p[i] = i+1;
                p[r] = l;
            }
        }

        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
            cout << p[i] << (i==n?'\n':' ');
        }
    }
}
