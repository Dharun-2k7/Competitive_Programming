#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    char d1 = a[0][0];          
    char d2 = a[0][1];          
    if (d1 == d2) {
        cout << "NO" << endl;
        return 0;
    }
    bool ok = true;
    for (int i = 0; i < n && ok; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i + j == n - 1) {
                if (a[i][j] != d1) {
                    ok = false;
                    break;
                }
            } else {
                if (a[i][j] != d2) {
                    ok = false;
                    break;
                }
            }
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
