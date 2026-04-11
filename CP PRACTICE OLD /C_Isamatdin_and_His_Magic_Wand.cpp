#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        bool eve = false, odd = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) eve = true;
            else odd = true;
        }

        if (eve && odd) {
            sort(a.begin(), a.end());
        }
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
