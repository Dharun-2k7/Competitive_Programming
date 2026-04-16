#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    vector<double> sum(m+1, 0);
    vector<int> cnt(m+1, 0);

    for (int i = 0; i < n; i++) {
        sum[a[i]] += b[i];
        cnt[a[i]]++;
    }

    cout << fixed << setprecision(20);
    for (int k = 1; k <= m; k++) {
        cout << sum[k] / cnt[k] << endl;
    }
}
