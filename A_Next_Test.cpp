#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> seen(3002, false);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= 1 && a[i] <= 3001) seen[a[i]] = true;
    }

    for (int i = 1; i <= 3001; i++) {
        if (!seen[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << 3001 << endl;
}
