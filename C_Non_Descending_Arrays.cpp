#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
using vi=vector<int>;
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vi a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int ans = 1;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) swap(a[i], b[i]);
      if (!i || a[i] >= b[i - 1]) ans = (ans * 2LL) % MOD;
    }
    cout << ans << endl;
  }
}