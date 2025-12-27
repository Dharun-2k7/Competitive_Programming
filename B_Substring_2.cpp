#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string s,t ; cin >> s >> t;

    int ans = INT_MAX;
    for (int i = 0; i + m <= n; i++) {
        int cst = 0;

        for (int j = 0; j < m; j++) {
            int a = t[j] - '0';
            int b = s[i + j] - '0';
            cst += (b - a + 10) % 10;
        }
        ans = min(ans, cst);
    }

    cout << ans << endl;
    return 0;
}
