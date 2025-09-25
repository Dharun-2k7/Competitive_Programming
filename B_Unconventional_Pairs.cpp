#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = 0; i + 1 < n; i += 2) {
            ans = max(ans, llabs(a[i + 1] - a[i]));
        }
        
        cout << ans << endl;
    }
}
