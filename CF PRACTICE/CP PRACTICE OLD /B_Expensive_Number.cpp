#include <bits/stdc++.h>
using namespace std; 
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        bool pos = false;
        int cnt= 0;
        
        for (auto i = n - 1; i >= 0; --i) {
            if (s[i] != '0') {
                pos = true;
            } else if (pos) {
                cnt++;
            }
        }
        
        cout << n - (cnt + 1) << endl;
    }
}