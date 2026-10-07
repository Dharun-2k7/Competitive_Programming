#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    int a[n], c[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        c[i] = a[i] == 0;
        if (i) c[i] += c[i - 1];
    }
    int ans = c[n - 1];
    if (ans == n){
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if (i + 1 - c[i] >= (c[n - 1] - c[i])){
            ans = min(ans, i + 1 - c[i]);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    int t; cin >> t;
    while (t--) solve();
}