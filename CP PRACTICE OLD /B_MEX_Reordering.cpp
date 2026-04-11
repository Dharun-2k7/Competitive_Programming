#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0) c0++;
            if (a[i] == 1) c1++;
        }
        if (c0 == 0) cout << "NO"<<endl;
        else if (c1 == 0 && c0 >= 2) cout << "NO"<<endl;
        else cout << "YES"<<endl;
    }
}
