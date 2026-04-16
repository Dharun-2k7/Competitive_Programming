#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> u(n, vector<int>(m, 0));
    vector<vector<int>> d(n, vector<int>(m, 0));
    vector<vector<int>> l(n, vector<int>(m, 0));
    vector<vector<int>> r(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == '*') {
                u[i][j] = (i > 0 ? u[i-1][j] : 0) + 1;
                l[i][j] = (j > 0 ? l[i][j-1] : 0) + 1;
            }
        }
    }

    for(int i = n-1; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
            if(a[i][j] == '*') {
                d[i][j] = (i < n-1 ? d[i+1][j] : 0) + 1;
                r[i][j] = (j < m-1 ? r[i][j+1] : 0) + 1;
            }
        }
    }

    long long cnt = 0;

    for(int x = 1; x <= max(n, m); x++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j] == '*') {
                    int mx = min(min(u[i][j], d[i][j]), min(l[i][j], r[i][j])) - 1;
                    if(mx >= x) {
                        cnt++;
                        if(cnt == k) {
                            cout << i+1 << " " << j+1 << "\n";
                            cout << i+1-x << " " << j+1 << "\n";
                            cout << i+1+x << " " << j+1 << "\n";
                            cout << i+1 << " " << j+1-x << "\n";
                            cout << i+1 << " " << j+1+x << "\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout << -1 << "\n";
    return 0;
}
