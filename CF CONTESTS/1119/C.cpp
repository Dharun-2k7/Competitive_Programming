#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int p = -1, q = -1;
        vector<int> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) b.push_back(i);
            if (a[i] == -1) {
                if (p == -1) p = i;
                q = i;
            }
        }
        int x = -1, y = -1, z = 0;
        if (b.empty()) {
            if (p != -1) {
                x = p;
                y = q;
                z = q - p + 1;
            }
        } else {
            for (int i = 0; i + 1 < b.size(); i++) {
                int l = b[i + 1] - b[i] + 1;
                if (l > z) {
                    z = l;
                    x = b[i];
                    y = b[i + 1];
                }
            }
            if (p != -1 && p < b[0]) {
                int l = b[0] - p + 1;
                if (l > z) {
                    z = l;
                    x = p;
                    y = b[0];
                }
            }
            if (q != -1 && q > b.back()) {
                int l = q - b.back() + 1;
                if (l > z) {
                    z = l;
                    x = b.back();
                    y = q;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (x != -1) a[x] = 1;
        if (y != -1) a[y] = 1;
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}