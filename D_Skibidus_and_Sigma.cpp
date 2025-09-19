#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arrays(n, vector<int>(m));
        vector<ll> sums(n);

        for(int i = 0; i < n; i++) {
            ll sum = 0;
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
                arrays[i][j] = x;
                sum += x;
            }
            sums[i] = sum;
        }

        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        sort(order.begin(), order.end(), [&](int i, int j) {
            return sums[i] > sums[j];
        });

        ll total_score = 0, prefix = 0;
        for(int idx : order) {
            for(int x : arrays[idx]) {
                prefix += x;
                total_score += prefix;
            }
        }

        cout << total_score << "\n";
    }
}
