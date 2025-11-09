#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long double ans = max((long double)a[0], (long double)(l - a[n - 1]));

    for (int i = 1; i < n; ++i) {
        long double gap = (long double)(a[i] - a[i - 1]) / 2.0;
        if (gap > ans) ans = gap;
    }

    cout << fixed << setprecision(10) << (double)ans << endl;
    return 0;
}
