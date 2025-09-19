<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector<int>;
using vvi = vector<vi>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n, m;
        cin >> n >> m;

        vvi a(n, vi(m));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> a[j][k];
            }
        }

        ll ans = 0;
        for (int k = 0; k < m; k++) {
            vector<ll> temp;
            ll sum = 0;
            for (int j = 0; j < n; j++) {
                temp.push_back(a[j][k]);
                sum += a[j][k];
            }

            ll curr = 0;
            sort(temp.begin(), temp.end());
            for (int j = 0; j < n; j++) {
                curr += temp[j];
                ans += llabs((sum - curr) - (n - 1 - j) * temp[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector<int>;
using vvi = vector<vi>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n, m;
        cin >> n >> m;

        vvi a(n, vi(m));
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> a[j][k];
            }
        }

        ll ans = 0;
        for (int k = 0; k < m; k++) {
            vector<ll> temp;
            ll sum = 0;
            for (int j = 0; j < n; j++) {
                temp.push_back(a[j][k]);
                sum += a[j][k];
            }

            ll curr = 0;
            sort(temp.begin(), temp.end());
            for (int j = 0; j < n; j++) {
                curr += temp[j];
                ans += llabs((sum - curr) - (n - 1 - j) * temp[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
