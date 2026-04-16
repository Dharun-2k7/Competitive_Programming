#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int d1 = 1; d1 < 7; d1++) {
        for (int d2 = 1; d2 < 7; d2++) {
            if (d1 + d2 >= x || d1 + y <= d2 || d2 + y <= d1) {
                cnt++;
            }
        }
    }
    double ans = cnt / 36.0;  
    cout << setprecision(12) << ans << endl;
}
