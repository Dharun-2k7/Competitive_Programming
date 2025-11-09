#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n - 1), a(n);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        b.push_back(0);
        b.insert(b.begin(), 0);  
        for (int i = 0; i < n; i++) {
            a[i] = b[i] | b[i + 1];
        }
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & a[i + 1]) != b[i + 1]) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        } else {
            cout << -1 << endl;
        }
    }
}
