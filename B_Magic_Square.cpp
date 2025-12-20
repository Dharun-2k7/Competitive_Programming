#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));

    int r = 0, c = n / 2;   
    a[r][c] = 1;

    for (int k = 2; k <= n * n; k++) {
        int nr = (r - 1 + n) % n;
        int nc = (c + 1) % n;

        if (a[nr][nc] == 0) {
            r = nr;
            c = nc;
        } else {
            r = (r + 1) % n;
        }

        a[r][c] = k;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << (j + 1 == n ? '\n' : ' ');
        }
    }
}
