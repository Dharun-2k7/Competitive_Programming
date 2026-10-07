#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >>t;
    while (t--) {
        int n,z = 0;
        cin >>n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
            if (x == 0) z++;
        }
        if (z < 2) cout << -1 << endl;
        else cout << a[0] + a[n - 1] << endl;
    }

}