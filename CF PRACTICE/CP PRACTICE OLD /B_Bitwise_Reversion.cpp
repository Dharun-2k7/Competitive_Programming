#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        bool ok = true;
        for (int i = 0; i < 31; i++) {
            int xi = (x >> i) & 1;
            int yi = (y >> i) & 1;
            int zi = (z >> i) & 1;
            bool found = false;

            for (int a = 0; a < 2; a++) {
                for (int b = 0; b < 2; b++) {
                    for (int c = 0; c < 2; c++) {
                        if ((a & b) == xi && (b & c) == yi && (a & c) == zi) {
                            found = true;
                        }
                    }
                }
            }
            if (!found) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO")<<endl;
    }
}
