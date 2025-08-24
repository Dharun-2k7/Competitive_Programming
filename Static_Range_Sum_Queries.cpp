#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> x(n);
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + x[i];
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << endl;
    }
}
